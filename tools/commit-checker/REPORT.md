<!---
Copyright (C) 2018 and later: Unicode, Inc. and others.
License & terms of use: http://www.unicode.org/copyright.html
-->

Commit Report
=============

Environment:
- Latest Commit: ea9ce7e34f85d1db5e484641f6fe653c6a61d795
- Jira Query: project=ICU AND fixVersion=67.1
- Rev Range: release-66-1..upstream/master
- Authenticated: Yes

## Problem Categories
### Closed Issues with No Commit
Tip: Tickets with type 'Task' or 'User Guide' or resolution 'Fixed by Other Ticket' are ignored.

*Success: No problems in this category!*
### Closed Issues with Illegal Resolution or Commit
Tip: Fixed tickets should have resolution 'Fixed by Other Ticket' or 'Fixed'.
Duplicate tickets should have their fixVersion tag removed.
Tickets with resolution 'Fixed by Other Ticket' are not allowed to have commits.

*Success: No problems in this category!*

### Commits without Jira Issue Tag
Tip: If you see your name here, make sure to label your commits correctly in the future.

*Success: No problems in this category!*

### Commits with Jira Issue Not Found
Tip: Check that these tickets have the correct fixVersion tag.

#### Issue ICU-20975

- ICU-20975: `ICU 66 RC BRS`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20975

##### Commits with Issue ICU-20975

- 0a1bd3c `ICU-20975 update KEYS`
	- Authored by Steven R. Loomis <srloomis@us.ibm.com>
	- Committed at 2020-03-09T18:22:38-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/0a1bd3caa9cc8bf7e0bc42c96d7e4f95ecfc9a48


### Commits with Open Jira Issue
Tip: Consider closing the ticket if it is fixed.

#### Issue ICU-10858

- ICU-10858: `ICU4C SimpleDateFormat operator= and operator== need updating`
	- Assigned to Peter Edberg
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-10858

##### Commits with Issue ICU-10858

- b525045 `ICU-10858 Fix missing fTimeZoneFormat assignment in SimpleDateFormat::operator= (#963)`
	- Authored by Campion <cloong@mathworks.com>
	- Committed at 2020-03-24T20:04:35-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/b525045209843feebe46d1655c0318ac3286b93a

#### Issue ICU-20303

- ICU-20303: `RBBI look-ahead rule limitation`
	- Assigned to Andy Heninger
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20303

##### Commits with Issue ICU-20303

- faa2f9f `ICU-20303 Break Iterator, improve handling of look-ahead rules.`
	- Authored by Andy Heninger <andy.heninger@gmail.com>
	- Committed at 2019-12-13T13:17:21-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/faa2f9f9e1fe74c5ed00eba371d2830134cdbea1

#### Issue ICU-20435

- ICU-20435: `ICU4C no longer builds with Cygwin (new version of Cygwin 3.0.0 causes build failures)`
	- Assigned to Jeff Genovy
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20435

##### Commits with Issue ICU-20435

- f78136f `ICU-20435 Fix parallel builds with Cygwin to 3.x`
	- Authored by Jeff Genovy <29107334+jefgen@users.noreply.github.com>
	- Committed at 2020-03-26T10:18:23-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/f78136f653826c00bc0274fb211856a73f89566d

- a8b07c9 `ICU-20435 Update Cygwin to 3.x to fix CI builds.`
	- Authored by Jeff Genovy <29107334+jefgen@users.noreply.github.com>
	- Committed at 2020-03-25T10:46:51-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/a8b07c98d0f5717ba10a10a5fb008ba66c58aa97

#### Issue ICU-20600

- ICU-20600: `export ICU data files in dist?`
	- Assigned to Steven R. Loomis
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20600

##### Commits with Issue ICU-20600

- f63a8bb `ICU-20600 build icu-data-bin files`
	- Authored by Steven R. Loomis <srloomis@us.ibm.com>
	- Committed at 2020-03-17T08:30:33-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/f63a8bb4e7852e133ffd2cefa6c81056cb6010f8

#### Issue ICU-20605

- ICU-20605: `ci: Make Unixy C builds available for download`
	- Assigned to Steven R. Loomis
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20605

##### Commits with Issue ICU-20605

- b1af32b `ICU-20605 travis: make dist`
	- Authored by Steven R. Loomis <srloomis@us.ibm.com>
	- Committed at 2020-03-17T11:37:24-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/b1af32bfa75e368943f8cca49b99eb4b1133866a

#### Issue ICU-20767

- ICU-20767: `Potential negative index access in one of the sample codes`
	- Assigned to Steven R. Loomis
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20767

##### Commits with Issue ICU-20767

- a4a5c60 `ICU-20767 Potential negative index access in one of the sample codes`
	- Authored by Keita Suzuki <keitasuzuki.park@sslab.ics.keio.ac.jp>
	- Committed at 2020-01-22T13:13:27-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/a4a5c603ac4e06d9d62e1ac35db2a2d9b9b0a51f

#### Issue ICU-20797

- ICU-20797: `c: can't compile tests with UBSan`
	- Assigned to Steven R. Loomis
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20797

##### Commits with Issue ICU-20797

- cb8e278 `ICU-20797 fix UBS compilation error and UBS in test code`
	- Authored by Steven R. Loomis <srloomis@us.ibm.com>
	- Committed at 2020-03-17T09:11:58-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/cb8e278ee6994dce769337f53c39acff5f68fb16

#### Issue ICU-20852

- ICU-20852: `build issue on Solaris/sparc`
	- Assigned to Steven R. Loomis
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20852

##### Commits with Issue ICU-20852

- 4a3a457 `ICU-20852 Fix Makefile to build on Sparc Solaris`
	- Authored by Mojca Miklavec <mojca.miklavec.lists@gmail.com>
	- Committed at 2020-02-19T12:42:40-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/4a3a457b38cd828b7b3fa4fdbc6e2504a57275e9

#### Issue ICU-20892

- ICU-20892: `Highlight `.cpyskip.txt` on GitHub.com`
	- Assigned to Steven R. Loomis
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20892

##### Commits with Issue ICU-20892

- d895e3f `ICU-20892 Highlight `.cpyskip.txt` on GitHub.com`
	- Authored by Alhadis <gardnerjohng@gmail.com>
	- Committed at 2019-12-18T10:39:43-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/d895e3f1640ddf5cfa1c193497e16f184212e397

#### Issue ICU-20939

- ICU-20939: `Incorrect word \b boundaries w UTF-8 input and non-ASCII text`
	- Assigned to Andy Heninger
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20939

##### Commits with Issue ICU-20939

- d6b88d4 `ICU-20939 Fix problem w regexp \b boundaries & UTF-8 text`
	- Authored by Andy Heninger <andy.heninger@gmail.com>
	- Committed at 2020-02-03T16:51:17-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/d6b88d49e3be7096baf3828776c2b482a8ed1780

#### Issue ICU-20964

- ICU-20964: `ICU jira ticket for all the errors related to typos.`
	- Assigned to Younies Mahmoud
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20964

##### Commits with Issue ICU-20964

- 20c29be `ICU-20964 Fix small typo mistake`
	- Authored by Younies Mahmoud <younies.mahmoud@gmail.com>
	- Committed at 2020-03-27T09:16:55-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/20c29becd69b19c62cb6618665fd773eeb73dab1

#### Issue ICU-20975

- ICU-20975: `ICU 66 RC BRS`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20975

##### Commits with Issue ICU-20975

- 0a1bd3c `ICU-20975 update KEYS`
	- Authored by Steven R. Loomis <srloomis@us.ibm.com>
	- Committed at 2020-03-09T18:22:38-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/0a1bd3caa9cc8bf7e0bc42c96d7e4f95ecfc9a48

#### Issue ICU-20976

- ICU-20976: `truncation warnings (GCC8)`
	- Assigned to Steven R. Loomis
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20976

##### Commits with Issue ICU-20976

- 2ced262 `ICU-20976 GCC 8 fixes phase 1`
	- Authored by Steven R. Loomis <srloomis@us.ibm.com>
	- Committed at 2020-03-24T11:51:20-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/2ced2624fc3629cf067675e20beaf399ab199533

#### Issue ICU-20978

- ICU-20978: `Reduce unnecessary building for tools when cross-building`
	- Assigned to Steven R. Loomis
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20978

##### Commits with Issue ICU-20978

- 1a01c5e `ICU-20978 Reduce unnecessary building for tools when cross-building`
	- Authored by Yuta Saito <kateinoigakukun@gmail.com>
	- Committed at 2020-03-17T18:42:30-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/1a01c5edc1c6333e1123697ae27dd7c0729dc6a7

#### Issue ICU-20979

- ICU-20979: `ICU 67 RC BRS`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-20979

##### Commits with Issue ICU-20979

- ea9ce7e `ICU-20979 BRS67RC Fixed a java doc issue`
	- Authored by Yoshito Umaoka <yumaoka@users.noreply.github.com>
	- Committed at 2020-03-30T15:10:54-04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/ea9ce7e34f85d1db5e484641f6fe653c6a61d795

- 2b33caa `ICU-20979 BRS67RC Clean up import statements`
	- Authored by Yoshito Umaoka <yumaoka@users.noreply.github.com>
	- Committed at 2020-03-30T15:10:28-04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/2b33caaff4b303cf0a03244934b7108a580681e0

- 73b50e6 `ICU-20979 BRS67RC Update version numbers, regenerate configure, update ICU4C README`
	- Authored by Daniel Ju <daju@microsoft.com>
	- Committed at 2020-03-26T17:21:05-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/73b50e6463cb68d2c0adfff3b081a995dfc1db42

- c163f7d `ICU-20979 integrate CLDR release-37-beta to master`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2020-03-24T13:28:54-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/c163f7dc29ea21cacd7c7c9000f1ba8a2f0698b1

#### Issue ICU-21022

- ICU-21022: `ICU4C: TestDateFormatRoundTrip fails in exhaustive test mode`
	- Assigned to Peter Edberg
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21022

##### Commits with Issue ICU-21022

- 1084c14 `ICU-21022 Use logKnownIssue to avoid TestDateFormatRoundTrip exhaustive fail`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2020-03-25T10:50:42-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/1084c1430aad6006d269d32941689defeeee2991


## Total Problems: 17
