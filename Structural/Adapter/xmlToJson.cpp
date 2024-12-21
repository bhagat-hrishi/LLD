#include <iostream>
#include <memory>
#include <string>

using namespace std;

// Class representing XML data
class XMLData {
private:
    string xmlData;

public:
    explicit XMLData(const string& pXmlData) : xmlData(pXmlData) {}

    string getXMLData() const {
        return xmlData;
    }
};

/**
 * DataAnalyticsTool analyzes data and expects data in JSON format.
 * To make it compatible with XML data, we use an Adapter in between.
 */
class DataAnalyticsTool {
private:
    string jsonData;

public:
    explicit DataAnalyticsTool(const string& pJsonData) : jsonData(pJsonData) {}

    virtual void analyzeData() {
        cout << "Analyzing Data: " << jsonData << endl;
    }

    virtual ~DataAnalyticsTool() = default; // Virtual destructor for proper cleanup
};

// Client class that processes data using the DataAnalyticsTool
class Client {
public:
    void processData(const unique_ptr<DataAnalyticsTool>& tool) {
        tool->analyzeData();
    }
};

// Adapter class that adapts XMLData to be used with DataAnalyticsTool
class Adapter : public DataAnalyticsTool {
private:
    unique_ptr<XMLData> xmlData; // Use smart pointer for automatic memory management

public:
    explicit Adapter(unique_ptr<XMLData> pXMLData)
        : DataAnalyticsTool("Converted JSON Data"), xmlData(move(pXMLData)) {}

    void analyzeData() override {
        cout << "Converting XML Data: " << xmlData->getXMLData() << " to JSON data" << endl;
        DataAnalyticsTool::analyzeData();
    }
};

int main() {
    // Create XML data using smart pointer
    auto xmlData = make_unique<XMLData>("Sample XML Data");

    // Create an adapter to convert XML data to JSON format
    unique_ptr<DataAnalyticsTool> tool = make_unique<Adapter>(move(xmlData));

    // Create a client and process the adapted data
    Client client;
    client.processData(tool);

    return 0;
}
