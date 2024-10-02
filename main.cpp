#include <iostream>
#include "client_logger_builder.h"

int main()
{
    //std::cout << "Hello, Logger!" << std::endl;
    
    client_logger_builder* b1 = new client_logger_builder;
    
    logger* l1 = b1->add_console_stream(logger::severity::information)
        ->add_console_stream(logger::severity::trace)
        ->set_format("%d %t hui::: %m")
        ->build();

    l1->log("zhopa", logger::severity::information);

    delete l1;

    client_logger_builder* b2 = new client_logger_builder;

    delete b1;

    logger* l2 = b2
        ->transform_with_configuration("logger_conf.json", "file_paths")
        ->build();
    
    delete b2;

    l2->log("pizda228", logger::severity::trace)
        ->log("оалоыд", logger::severity::debug);

    delete l2;

    return 0;
}