## Collected 3 commit(s) to exclude
<!--
Copyright (C) 2021 and later: Unicode, Inc. and others.
License & terms of use: http://www.unicode.org/copyright.html
-->
Commit Report
=============

Environment:
- Now: 2024-04-15T17:24:21.063067
- Latest Commit: https://github.com/unicode-org/icu/commit/0379e638a9808507b0b977ca223756a71bebd922
- Jira Query: `project=ICU AND fixVersion=75.1`
- Rev Range: `release-74-2..upstream/maint/maint-75`
- Authenticated: `Yes`

-----
-----
_(anything between the above two lines is an error)_

Total problem(s): 4

## Table Of Contents
Note: empty categories are omitted.
- _Closed Issues with No Commit_
- _Closed Issues with Commit Policy Problems_
- _Commits without Jira Issue Tag_
- _Commits with Jira Issue Not Found_
- [Commits with Open Jira Issue](#commits-with-open-jira-issue) 4
- _Issue is under Review_
- [Excluded Commits](#excluded-commits) 3

## Problem Categories
### Commits with Open Jira Issue
[🔝Top](#table-of-contents)

_4 item(s)_
Tip: Consider closing the ticket if it is fixed.

#### Open Issues by Component

 - **format_message**: [ICU-22261](#issue-icu-22261)
 - **others**: [ICU-22532](#issue-icu-22532) [ICU-22533](#issue-icu-22533)
 - **team_processes_tools**: [ICU-22535](#issue-icu-22535)


#### Issue ICU-22261

_Jira issue is open_
- [ICU-22261](https://unicode-org.atlassian.net/browse/ICU-22261): `Implement MessageFormat v2 in libicu4c`
	- Assigned to Tim Chevalier
	- Status: Accepted
	- Fix Version: 75.1
	- Component(s): format_message

##### Commits with Issue ICU-22261

- [a1bce0c](https://github.com/unicode-org/icu/commit/a1bce0c0963b1488061fe73efa120c07237a235a) [ICU-22261](https://unicode-org.atlassian.net/browse/ICU-22261) `Refactor error handling for internal MF2 array-allocating functions`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-04-12T09:22:15-07:00

- [75eab42](https://github.com/unicode-org/icu/commit/75eab42060d6a73b62db2bc639216eae1f8ec47e) [ICU-22261](https://unicode-org.atlassian.net/browse/ICU-22261) `Improved identification of the MSVC compiler and library.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-04-11T15:35:23-07:00

- [9e1c66d](https://github.com/unicode-org/icu/commit/9e1c66daf72ef7f629ca954d78654c70248c1b20) [ICU-22261](https://unicode-org.atlassian.net/browse/ICU-22261) `Refactor MF2 attributes and options parsing code`
	- Authored by Tim Chevalier <tjc@igalia.com>
	- Committed at 2024-04-09T08:15:54-07:00

- [4f0c2ca](https://github.com/unicode-org/icu/commit/4f0c2ca71c56c78fd56ea4fc0618ec2b34e0d0a6) [ICU-22261](https://unicode-org.atlassian.net/browse/ICU-22261) `Remove MF2 formatter caching optimization`
	- Authored by Tim Chevalier <tjc@igalia.com>
	- Committed at 2024-04-05T13:14:34-07:00

- [070a1f4](https://github.com/unicode-org/icu/commit/070a1f420bc68042ead85ab07a73212382f0fa05) [ICU-22261](https://unicode-org.atlassian.net/browse/ICU-22261) `Add missing API tags for MessageFormat 2 methods/constants`
	- Authored by Tim Chevalier <tjc@igalia.com>
	- Committed at 2024-03-28T15:46:32-07:00

- [aff1bba](https://github.com/unicode-org/icu/commit/aff1bbaa14c21fabe0182ac2e7cad6ffceb2e59d) [ICU-22261](https://unicode-org.atlassian.net/browse/ICU-22261) `Add UCONFIG_NO_MF2 flag that can be used to disable MessageFormat 2 functionality`
	- Authored by Tim Chevalier <tjc@igalia.com>
	- Committed at 2024-03-28T08:48:35-07:00

- [f7d641d](https://github.com/unicode-org/icu/commit/f7d641d5adb0460d1f58bad5947a29725870cc83) [ICU-22261](https://unicode-org.atlassian.net/browse/ICU-22261) `Add tech preview implementation for MessageFormat 2.0 to icu4c`
	- Authored by Tim Chevalier <tjc@igalia.com>
	- Committed at 2024-03-27T17:04:07-04:00

#### Issue ICU-22532

_Jira issue is open_
- [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532): `ICU 75 code warnings/version updates`
	- Assigned to Markus Scherer
	- Status: Accepted
	- Fix Version: 75.1
	- Component(s): others

##### Commits with Issue ICU-22532

- [bae39ad](https://github.com/unicode-org/icu/commit/bae39adf672ccecfc84d296ad81c2ade5c327fb9) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Resolve new / free() mismatch.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-04-08T22:04:00+02:00

- [94305fc](https://github.com/unicode-org/icu/commit/94305fc59bbd56ff46b54290a052767ffa964ac2) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Bump the github-actions group with 9 updates`
	- Authored by dependabot[bot] <49699333+dependabot[bot]@users.noreply.github.com>
	- Committed at 2024-03-21T09:45:50-07:00

- [104214a](https://github.com/unicode-org/icu/commit/104214aeae7c944070ff886eed787ac24287d334) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Use previous Ubuntu version for ICU4C in GH Actions CI for now`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-03-14T16:20:49-07:00

- [0d7cedc](https://github.com/unicode-org/icu/commit/0d7cedc0dd7cbe595ba415bbad226262a5358a3d) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Trigger CI workflows when workflow definitions change`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-02-28T12:50:43-05:00

- [c2b3282](https://github.com/unicode-org/icu/commit/c2b328267e2c92a7482775c3450bcfd9c3ba3d08) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Increase timeout for exhaustive ICU4J tests`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-02-27T10:58:18-08:00

- [3df505b](https://github.com/unicode-org/icu/commit/3df505b5116218a7a4be976ba6bd8f802d84a7ff) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Increase Github Actions CI parallelism from 2 to 4`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-02-27T10:58:09-08:00

- [314f03e](https://github.com/unicode-org/icu/commit/314f03eeaf7473bf86a29ece677050709138ca22) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Don't dereference nullptr (-Wtautological-undefined-compare).`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-02-27T14:11:38+01:00

- [fd5d6c9](https://github.com/unicode-org/icu/commit/fd5d6c97b1d0cff4a07db3c7e7ab04b20099e124) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Improve commit checker instructions`
	- Authored by Shane F. Carr <shane@unicode.org>
	- Committed at 2024-02-23T16:38:14-06:00

- [e81b872](https://github.com/unicode-org/icu/commit/e81b8727aaafa306858565c0e4116703c4893459) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Move the definition of _POSIX_C_SOURCE to the Makefile.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-01-23T13:00:54+09:00

- [a837e0d](https://github.com/unicode-org/icu/commit/a837e0d3991e05db61dfbd35ee985976109092d5) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Set a value for _POSIX_C_SOURCE to get symlink() declared.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-01-11T17:35:28+09:00

- [539e8f4](https://github.com/unicode-org/icu/commit/539e8f41a35fec30fba4cfb3a65ea4db67978f85) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Compiler warning: conversion from 'double' to 'int32_t'.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-01-04T09:40:40+09:00

- [1384d9f](https://github.com/unicode-org/icu/commit/1384d9f3959470974470267eab722614b71e02d8) [ICU-22532](https://unicode-org.atlassian.net/browse/ICU-22532) `Remove redundant 'void' from empty C++ parameter lists.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2023-12-19T09:27:18+09:00

#### Issue ICU-22533

_Jira issue is open_
- [ICU-22533](https://unicode-org.atlassian.net/browse/ICU-22533): `ICU 75 docs minor fixes`
	- Assigned to Markus Scherer
	- Status: Accepted
	- Fix Version: 75.1
	- Component(s): others

##### Commits with Issue ICU-22533

- [aebd5ba](https://github.com/unicode-org/icu/commit/aebd5ba54b1676280d4d454916d1456c1891add0) [ICU-22533](https://unicode-org.atlassian.net/browse/ICU-22533) `Change API version annotation from 75.0 to 75`
	- Authored by Mihai Nita <mnita@google.com>
	- Committed at 2024-04-15T11:17:15-07:00

- [6eb43b1](https://github.com/unicode-org/icu/commit/6eb43b164806efdbe0d55fc0db9c60a8cbcb971f) [ICU-22533](https://unicode-org.atlassian.net/browse/ICU-22533) `Update badges for CI pipelines, user guide docs about CI`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-03-22T12:18:47+05:30

- [18c7d48](https://github.com/unicode-org/icu/commit/18c7d48b3e527ccead8ba93abd6059dfe1329258) [ICU-22533](https://unicode-org.atlassian.net/browse/ICU-22533) `Add docs on Continuous Integration`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-03-12T09:14:24-07:00

- [90b2eed](https://github.com/unicode-org/icu/commit/90b2eed71aa31ff5d4859502f92922f419d5b510) [ICU-22533](https://unicode-org.atlassian.net/browse/ICU-22533) `compact norm16 tables`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-02-14T14:49:43-08:00

- [164a56b](https://github.com/unicode-org/icu/commit/164a56b73613159111d32dbb8497c6f5e96fa5cf) [ICU-22533](https://unicode-org.atlassian.net/browse/ICU-22533) `move custom normalization page from Sites to GitHub`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-02-14T09:35:14-08:00

- [400d97e](https://github.com/unicode-org/icu/commit/400d97e7d206ffae77c294faeb9e2aa3850c6c23) [ICU-22533](https://unicode-org.atlassian.net/browse/ICU-22533) `Update Maven CLI instructions for multi-module ICU4J`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-01-23T13:59:56-08:00

- [511e5ef](https://github.com/unicode-org/icu/commit/511e5efe562667dfe3f57c8d4cd8eb3af5b2137b) [ICU-22533](https://unicode-org.atlassian.net/browse/ICU-22533) `Update BRS instructions for tagging release`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2023-11-10T15:33:31-08:00

- [091fcf6](https://github.com/unicode-org/icu/commit/091fcf6f82d3e2a3b956637bc44bd6c5650e8b85) [ICU-22533](https://unicode-org.atlassian.net/browse/ICU-22533) `Don't mention 'Release Candidate' in javadoc`
	- Authored by Mihai Nita <mnita@google.com>
	- Committed at 2023-11-09T16:09:55-08:00

#### Issue ICU-22535

_Jira issue is open_
- [ICU-22535](https://unicode-org.atlassian.net/browse/ICU-22535): `ICU 75 BRS`
	- Assigned to Markus Scherer
	- Status: Accepted
	- Fix Version: 75.1
	- Component(s): team_processes_tools

##### Commits with Issue ICU-22535

- [530e9a5](https://github.com/unicode-org/icu/commit/530e9a509f73d86ab051c723412e844241e111aa) [ICU-22535](https://unicode-org.atlassian.net/browse/ICU-22535) `BRS_75_GA: Update cldr-to-icu version to 75.1`
	- Authored by Rahul Pandey <rp9.next@gmail.com>
	- Committed at 2024-04-15T12:28:25-07:00

- [9518b26](https://github.com/unicode-org/icu/commit/9518b26a91a6787e6c8e25b586334eb5a0f4a049) [ICU-22535](https://unicode-org.atlassian.net/browse/ICU-22535) `Integrate CLDR 45 release beta4, part 5, restore copyright headers in catalog.txt`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-04-12T16:21:12-07:00

- [dcae387](https://github.com/unicode-org/icu/commit/dcae3872f0a55f111c9515df2329fb0ea9afb8e4) [ICU-22535](https://unicode-org.atlassian.net/browse/ICU-22535) `Integrate CLDR 45 release beta4, part 4, build updates`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-04-12T16:21:12-07:00

- [c27199e](https://github.com/unicode-org/icu/commit/c27199ec9c970b268a017fdba6334ad202b4c441) [ICU-22535](https://unicode-org.atlassian.net/browse/ICU-22535) `Integrate CLDR 45 release beta4, part 3, data updates`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-04-12T16:21:12-07:00

- [66c8c65](https://github.com/unicode-org/icu/commit/66c8c6585748efc7fd573d3d1317bdc2807e6abc) [ICU-22535](https://unicode-org.atlassian.net/browse/ICU-22535) `Integrate CLDR 45 release beta4, part 2, personName test data updates`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-04-12T16:21:12-07:00

- [97a046d](https://github.com/unicode-org/icu/commit/97a046d11675a140dc9209fd418d35cde4096ea9) [ICU-22535](https://unicode-org.atlassian.net/browse/ICU-22535) `Integrate CLDR 45 release beta4, part 1, binary files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-04-12T16:21:12-07:00

- [2f7a3ea](https://github.com/unicode-org/icu/commit/2f7a3ea49185d1ecfee98dd558b21e8fe99bb4dc) [ICU-22535](https://unicode-org.atlassian.net/browse/ICU-22535) `BRS_75_GA: Update ICU version to 75.1 (no more -SNAPSHOT)`
	- Authored by Rahul Pandey <rp9.next@gmail.com>
	- Committed at 2024-04-12T09:36:09-07:00

- [9c466d4](https://github.com/unicode-org/icu/commit/9c466d43d961ce8cf5ec8d56e8102da2b064b460) [ICU-22535](https://unicode-org.atlassian.net/browse/ICU-22535) `Integrate CLDR 45 release beta3`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-04-04T08:49:37-07:00

- [fc91b6b](https://github.com/unicode-org/icu/commit/fc91b6bb7ff9e23565771db28d77441e79a6217f) [ICU-22535](https://unicode-org.atlassian.net/browse/ICU-22535) `Integrate CLDR 45 release beta2, part 2, data and source files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-04-02T13:29:34-07:00

- [492a844](https://github.com/unicode-org/icu/commit/492a8441db90a89b442a3f977a3eb589e09a9424) [ICU-22535](https://unicode-org.atlassian.net/browse/ICU-22535) `Integrate CLDR 45 release beta2, part 1, binary files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-04-02T13:29:34-07:00


### Excluded Commits
[🔝Top](#table-of-contents)

_3 item(s)_
These commits are not considered as part of current version tickets.

- [a7c7d8f](https://github.com/unicode-org/icu/commit/a7c7d8f214926ef23d2b54500ab77d95e5ea0068) [ICU-22561](https://unicode-org.atlassian.net/browse/ICU-22561) `Added maven-gpg-plugin in pom.xml to sign artifacts for maven central release.`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2023-10-30T19:51:44-07:00
	- NOTE: excluded due to already being merged to old maint
- [bcae6f2](https://github.com/unicode-org/icu/commit/bcae6f2a437f3e58eb5afb8568f88b286a389e37) [ICU-22575](https://unicode-org.atlassian.net/browse/ICU-22575) `Change AvailableFormatsSink to allow locales to inherit availableFormats items from the root locale.`
	- Authored by Rich Gillam <richard_gillam@apple.com>
	- Committed at 2023-12-04T12:47:50-08:00
	- NOTE: excluded due to already being merged to old maint
- [da83309](https://github.com/unicode-org/icu/commit/da83309900e90509d6d559e4ad5f9a2a0a1cef6b) [ICU-22595](https://unicode-org.atlassian.net/browse/ICU-22595) `GitHub release file generation script to include javadoc for each artifact in addition to full javadoc`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2023-12-07T10:37:15-08:00
	- NOTE: excluded due to already being merged to old maint

