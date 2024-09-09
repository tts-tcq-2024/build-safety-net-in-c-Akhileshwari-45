#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("AB", soundex);
  EXPECT_STREQ(soundex,"A100");
}

TEST(SoudexTestsuite, testcase1) {
 //AAA
  char soundex[5];
  generateSoundex("ABXY", soundex);
  EXPECT_STREQ(soundex,"A120");
}

TEST(SoudexTestsuite, testcase2) {
 //AAA
  char soundex[5];
  generateSoundex("CDLM", soundex);
  EXPECT_STREQ(soundex,"C345");
}

TEST(SoudexTestsuite, testcase3) {
 //AAA
  char soundex[5];
  generateSoundex("PJAY", soundex);
  EXPECT_STREQ(soundex,"P200");
}
