<!---
Copyright (C) 2018 and later: Unicode, Inc. and others.
License & terms of use: http://www.unicode.org/copyright.html
-->

Commit Report
=============

Environment:
- Latest Commit: cec7de7a390dd6907b0ea0feb4488ed3934ee71d
- Jira Query: project=ICU AND fixVersion=69.1
- Rev Range: release-68-2..upstream/master
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

#### Issue ICU-21018

- ICU-21018: `500+ spelling errors in various source files`
	- Assigned to Peter Edberg
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21018

##### Commits with Issue ICU-21018

- bd3b202 `ICU-21018 Fix typos across repo that start with letter A`
	- Authored by Erik Torres Aguilar <ertorres@microsoft.com>
	- Committed at 2021-01-06T15:15:35-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/bd3b2027415fa619cfe643c9becf7042f2c06439

- 6eea259 `ICU-21018 Fix typos across repo that start with letter C`
	- Authored by Erik Torres Aguilar <ertorres@microsoft.com>
	- Committed at 2021-01-06T15:15:26-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/6eea259143bf312cc19fd253dd964192f87deb26

#### Issue ICU-21041

- ICU-21041: `Fuzzer-detected Null-dereference READ in icu_67::DataBuilderCollationIterator::getCE32FromBuilderData`
	- Assigned to Frank Yung-Fong Tang
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21041

##### Commits with Issue ICU-21041

- 63b9a8a `ICU-21041 Fix fuzzer memory read error.`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2021-03-10T15:26:52-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/63b9a8aea84fe6196f6812bcb17c417b45730fb3

#### Issue ICU-21520

- ICU-21520: `Tracking bug for restoring and extending the ICU performance tests`
	- Assigned to Norbert Runge
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21520

##### Commits with Issue ICU-21520

- 3d7ba65 `ICU-21520 Fixes typo in name of test data file; removes a regex that`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2021-03-16T20:01:16-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/3d7ba6560ef59fad4ea0ed38a7a3ee57792daee3


### Commits with Open Jira Issue
Tip: Consider closing the ticket if it is fixed.

#### Issue ICU-21018

- ICU-21018: `500+ spelling errors in various source files`
	- Assigned to Peter Edberg
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21018

##### Commits with Issue ICU-21018

- bd3b202 `ICU-21018 Fix typos across repo that start with letter A`
	- Authored by Erik Torres Aguilar <ertorres@microsoft.com>
	- Committed at 2021-01-06T15:15:35-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/bd3b2027415fa619cfe643c9becf7042f2c06439

- 6eea259 `ICU-21018 Fix typos across repo that start with letter C`
	- Authored by Erik Torres Aguilar <ertorres@microsoft.com>
	- Committed at 2021-01-06T15:15:26-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/6eea259143bf312cc19fd253dd964192f87deb26

#### Issue ICU-21041

- ICU-21041: `Fuzzer-detected Null-dereference READ in icu_67::DataBuilderCollationIterator::getCE32FromBuilderData`
	- Assigned to Frank Yung-Fong Tang
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21041

##### Commits with Issue ICU-21041

- 63b9a8a `ICU-21041 Fix fuzzer memory read error.`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2021-03-10T15:26:52-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/63b9a8aea84fe6196f6812bcb17c417b45730fb3

#### Issue ICU-21310

- ICU-21310: `minimize ICU4C & ICU4J readmes`
	- Assigned to Elango Cheran
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21310

##### Commits with Issue ICU-21310

- 73ab117 `ICU-21310 finish converting ICU4C and ICU4J Readmes to Markdown`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2020-12-03T13:12:15-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/73ab117a2dbbb7a0e627924ff99b925573c7014d

#### Issue ICU-21323

- ICU-21323: `Automate more BRS tasks`
	- Assigned to Norbert Runge
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21323

##### Commits with Issue ICU-21323

- 22dace7 `ICU-21323 Automates the uconfig variation BRS tasks. The test`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2021-03-11T16:25:33-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/22dace7f5f1901771eced75a00911be720ad602a

- 90631ab `ICU-21323 Automates BRS test task of build and run testmap.`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2021-03-05T11:01:42-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/90631ab80765d5beb51901d03b678931a5c32633

- 65c1b9e `ICU-21323 Automates BRS testing tasks of U_CHARSET_IS_UTF8 and`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2021-03-03T11:45:02-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/65c1b9e6904569cbe452ba74b5ebf6652f68f3ef

- 7356455 `ICU-21323 Adds BRS task 'test ICU4C without data' to GHA, triggered by`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2021-02-26T14:19:01-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/735645589ee4d89e27abf541fda8b58ad238166d

#### Issue ICU-21330

- ICU-21330: `StandardPlural cannot handle plural keywords '1' or '0'`
	- Assigned to Shane Carr
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21330

##### Commits with Issue ICU-21330

- c26d99b `ICU-21330 Use =0 and =1 plural forms in compact notation`
	- Authored by Shane F. Carr <shane@unicode.org>
	- Committed at 2021-03-11T17:34:35-06:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/c26d99b3a6bf2df80c172428a0dd85ac4e13441d

#### Issue ICU-21416

- ICU-21416: `Fix typos for ICU 69`
	- Assigned to Erik Torres Aguilar
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21416

##### Commits with Issue ICU-21416

- f397c0a `ICU-21416 Update icu4c-readme.md`
	- Authored by abarberenaCPDS <43246964+abarberenaCPDS@users.noreply.github.com>
	- Committed at 2021-03-08T13:57:36-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/f397c0af3d0be936e42e5229e7e4b2e4fb1ec372

- 00c1061 `ICU-21416 Fix markdown formatting in userguide/strings`
	- Authored by Patrick Reader <_@pxeger.com>
	- Committed at 2021-03-08T13:56:20-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/00c106179f2137115448e7b1a21c9717de78f14b

- fb715ea `ICU-21416 Fix typos and formatting errors in regexp.md`
	- Authored by Ken Harris <kengruven@gmail.com>
	- Committed at 2020-12-16T21:15:34-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/fb715eab4c4c2fab49cc3c6eb58cb3ccc7d16e4c

- bb5d29b `ICU-21416 Fix typos in comments`
	- Authored by inokawa <48897392+inokawa@users.noreply.github.com>
	- Committed at 2020-12-09T14:17:14-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/bb5d29b1436c6a5606b99554df6adf58cbc22f64

#### Issue ICU-21462

- ICU-21462: `ICULocaleService.java has a race condition`
	- Assigned to George Rhoten
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21462

##### Commits with Issue ICU-21462

- 747f5cd `ICU-21462 ICULocaleService.java has a race condition`
	- Authored by George Rhoten <grhoten@users.noreply.github.com>
	- Committed at 2021-01-22T11:05:08-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/747f5cd924959f2ec70ec85e92237a8b809faece

#### Issue ICU-21480

- ICU-21480: `ICU 69 RC BRS`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21480

##### Commits with Issue ICU-21480

- 2ae2f31 `ICU-21480 Change ICU4C/J Readme update date after version change`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2021-03-16T13:34:06-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/2ae2f31c2f1b895304f76bc387e0106f8bea7fce

- bc7e2e2 `ICU-21480 Scrub TODOs for completed issues 21292 and 21236`
	- Authored by Craig Cornelius <cwcornelius@gmail.com>
	- Committed at 2021-03-16T11:17:14-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/bc7e2e230c31166d58e594297654ddccdc5c9542

- 2273ebb `ICU-21480 fix logKnownIssue number`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2021-03-16T09:17:03-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/2273ebbc802e9f9e68108cb00d4ff79cdcc2d4f5

- 0619ea3 `ICU-21480 BRS-50: updated docmain.h`
	- Authored by Craig Cornelius <cwcornelius@gmail.com>
	- Committed at 2021-03-15T15:33:05-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/0619ea317fc99e176dc0ca9accaae7aded565445

- 084d8bc `ICU-21480 BRS69 clean up import statements`
	- Authored by Yoshito Umaoka <yumaoka@users.noreply.github.com>
	- Committed at 2021-03-15T15:40:49-04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/084d8bc8e2e33d85d68c5a7a038ee9d11d44be12

- eab1c02 `ICU-21480 BRS69 ICU4J 69 serialization test data`
	- Authored by Yoshito Umaoka <yumaoka@users.noreply.github.com>
	- Committed at 2021-03-15T15:40:27-04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/eab1c02d4280f0341f1007a69faf9d459015a771

- e9b4964 `ICU-21480 BRS69 ICU4J API signature file`
	- Authored by Yoshito Umaoka <yumaoka@users.noreply.github.com>
	- Committed at 2021-03-15T15:40:04-04:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/e9b4964f00ffa90d09c97f550d46e1dd15269fec

- 34030d9 `ICU-21480 brs 69rc, adjust nonstable API macros`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-03-15T09:43:54-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/34030d911ed340050b4d96e8302447b3d5f5824b

- 0fb132a `ICU-21480 Update ICU4C APIChangeReport files`
	- Authored by Craig Cornelius <cwcornelius@gmail.com>
	- Committed at 2021-03-12T10:32:32-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/0fb132a35fc8e81efa2dc6b9a32e56e2ae89292d

- e47430d `ICU-21480 Update ICU4J APIChangeReport.html to 69`
	- Authored by Craig Cornelius <cwcornelius@gmail.com>
	- Committed at 2021-03-12T10:26:20-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/e47430d91768f22f3d68d8a1228a604018e39739

- 8bb7136 `ICU-21480 integrate CLDR release-39-beta to ICU trunk`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-03-11T08:43:25-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/8bb71362f2266111a71436f1fd467aa48005a0b0

- 3218440 `ICU-21480 Change ICU 64 draft readResolve APIs to @internal`
	- Authored by Craig Cornelius <cwcornelius@gmail.com>
	- Committed at 2021-03-10T20:23:23-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/3218440d5a5e4e927555f550f753205eef7f7660

- 6cdfe2d `ICU-21480 brs 69rc, add tests to verify that rbnf spellout is the same for no,nb`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-03-10T13:51:32-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/6cdfe2dc1faa3b40a68448133857c2c9887c48bd

- 2f89152 `ICU-21480 BRS#18 ICU4J promotions to stable`
	- Authored by Craig Cornelius <cwcornelius@gmail.com>
	- Committed at 2021-03-09T13:14:45-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/2f8915283096b811f62e27e9d39a8f6b29c05f33

- b11ba74 `ICU-21480 brs 69rc, update urename.h pass 0`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-03-08T11:15:49-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/b11ba74dd4077af492f236e21f57147d0e557833

- be039c5 `ICU-21480 Promoted all @draft ICU 67 APIs to @stable ICU 67.`
	- Authored by Rich Gillam <62772518+richgillam@users.noreply.github.com>
	- Committed at 2021-03-03T17:21:42-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/be039c59362f64e0bdd6323ff615437928d40b1d

- 1bf2aa2 `ICU-21480 BRS69RC update readmes for RC`
	- Authored by Erik Torres <erik.torres.aguilar@gmail.com>
	- Committed at 2021-03-03T12:41:20-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/1bf2aa2354d7026184074a951590004b6062e8e3

- 1fa3419 `ICU-21480 Update GitHub pull request template to prevent autolinking example ticket number.`
	- Authored by Jeff Genovy <29107334+jefgen@users.noreply.github.com>
	- Committed at 2021-03-02T17:17:21-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/1fa3419812b3bab42c80506311f8f4f843ee03b5

- 31182a9 `ICU-21480 integrate CLDR release-39-alpha4 to ICU trunk`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-02-25T10:19:57-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/31182a99b4ced2ea27228c07a840671fbe897ddb

- f23bd25 `ICU-21480 Update GitHub pull request template: JIRA issue number is needed on commit messages.`
	- Authored by Jeff Genovy <29107334+jefgen@users.noreply.github.com>
	- Committed at 2021-02-24T17:13:17-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/f23bd25ef5d1878fdde34ce732866c45eea10f87

- 6e91c75 `ICU-21480 Update French unit-times pattern in unit tests`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2021-02-24T23:35:29+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/6e91c7552eee0fa8fb760aa39f34984ff26f9f58

- e9bb3e4 `ICU-21480 integrate CLDR release-39-alpha3 to ICU trunk`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-02-24T10:45:42-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/e9bb3e440e318898b1e7eea5d4471921c80d982f

- cf83c5b `ICU-21480 integrate CLDR release-39-alpha2 to ICU trunk`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-02-19T10:53:23-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/cf83c5b3850a82c5ffbb6d892805205c941374c6

- 7159e33 `ICU-21480 integrate CLDR release 39 alpha1 to ICU trunk`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-02-16T21:44:12-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/7159e334ff12893b857de9a92e1c2eae4f3399fc

- 9c73e15 `ICU-21480 BRS69RC Version update and regenerate configure for v69`
	- Authored by Erik Torres Aguilar <ertorres@microsoft.com>
	- Committed at 2021-02-11T15:43:55-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/9c73e15d029189a70fb33e9488739397247a6d5b

- 3333fd5 `ICU-21480 integrate CLDR release 39 alpha0 to ICU trunk`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2021-02-10T11:58:26-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/3333fd557c398c98805f1ffdc63df796dc2bdcbd

#### Issue ICU-21520

- ICU-21520: `Tracking bug for restoring and extending the ICU performance tests`
	- Assigned to Norbert Runge
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21520

##### Commits with Issue ICU-21520

- 3d7ba65 `ICU-21520 Fixes typo in name of test data file; removes a regex that`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2021-03-16T20:01:16-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/3d7ba6560ef59fad4ea0ed38a7a3ee57792daee3

#### Issue ICU-21534

- ICU-21534: `Announce warning of master to main renaming of March 24-25, 2021`
	- Assigned to Frank Yung-Fong Tang
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21534

##### Commits with Issue ICU-21534

- 1732ff4 `ICU-21534 Add notice about master to main rename`
	- Authored by Frank Yung-Fong Tang <ftang@google.com>
	- Committed at 2021-03-12T11:12:18-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/1732ff41444ad99dd92839fa14fcc73b87deec5c

#### Issue ICU-21537

- ICU-21537: `Invalid-free in icu::Locale::operator= in ASAN while locale internally is 157 long`
	- Assigned to Frank Yung-Fong Tang
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21537

##### Commits with Issue ICU-21537

- cec7de7 `ICU-21537 Fix invalid free by long locale name`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2021-03-17T10:34:27-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/cec7de7a390dd6907b0ea0feb4488ed3934ee71d


## Total Problems: 14
