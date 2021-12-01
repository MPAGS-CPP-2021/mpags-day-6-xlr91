//! Unit Tests for MPAGSCipher CaesarCipher Class
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "CaesarCipher.hpp"

TEST_CASE("Caesar Cipher encryption", "[caesar]")
{
    CaesarCipher cc{10};
    REQUIRE(cc.applyCipher("HELLOWORLD", CipherMode::Encrypt) == "ROVVYGYBVN");
}

TEST_CASE("Caesar Cipher decryption", "[caesar]")
{
    CaesarCipher cc{10};
    REQUIRE(cc.applyCipher("ROVVYGYBVN", CipherMode::Decrypt) == "HELLOWORLD");
}

//Insert test case for those catches, Dont know how to tell Catch to test these