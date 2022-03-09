## Collected 0 commit(s) to exclude
<!--
Copyright (C) 2021 and later: Unicode, Inc. and others.
License & terms of use: http://www.unicode.org/copyright.html
-->
Commit Report
=============

Environment:
- Now: 2022-03-09T10:45:59.672379
- Latest Commit: https://github.com/unicode-org/icu/commit/234cbe2c17034c68d6dd6df09fda79a052f0a238
- Jira Query: `project=ICU AND fixVersion=71.1`
- Rev Range: `release-70-1..upstream/main`
- Authenticated: `Yes`

## Table Of Contents
- [Closed Issues with No Commit](#closed-issues-with-no-commit)
- [Closed Issues with Illegal Resolution or Commit](#closed-issues-with-illegal-resolution-or-commit)
- [Commits without Jira Issue Tag](#commits-without-jira-issue-tag)
- [Commits with Jira Issue Not Found](#commits-with-jira-issue-not-found)
- [Commits with Open Jira Issue](#commits-with-open-jira-issue)
- [Issue is under Review](#issue-is-under-review)

## Problem Categories
### Closed Issues with No Commit
[🔝Top](#table-of-contents)

Tip: Tickets with type 'Task' or 'User Guide' or resolution 'Fixed by Other Ticket' are ignored.

- ICU-21914: `Add private key to unicode/icu repository`
	- _Closed Issues with No Commit_
	- Assigned to Norbert Runge
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21914
	- Status: Done
	- Resolution: Fixed
	- Fix Version: 71.1
	- Component(s): team_processes_tools

- ICU-21745: `Create empty branch in main repository to store performance test data`
	- _Closed Issues with No Commit_
	- Assigned to Elango Cheran
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21745
	- Status: Done
	- Resolution: Fixed
	- Fix Version: 71.1
	- Component(s): test_fmwk_util

### Closed Issues with Illegal Resolution or Commit
[🔝Top](#table-of-contents)

Tip: Fixed tickets should have resolution 'Fixed by Other Ticket' or 'Fixed'.
Duplicate tickets should have their fixVersion tag removed.
Tickets with resolution 'Fixed by Other Ticket' are not allowed to have commits.

*Success: No problems in this category!*

### Commits without Jira Issue Tag
[🔝Top](#table-of-contents)

Tip: If you see your name here, make sure to label your commits correctly in the future.

*Success: No problems in this category!*

### Commits with Jira Issue Not Found
[🔝Top](#table-of-contents)

Tip: Check that these tickets have the correct fixVersion tag.

*Success: No problems in this category!*

### Commits with Open Jira Issue
[🔝Top](#table-of-contents)

Tip: Consider closing the ticket if it is fixed.

#### Open Issues by Component

 - **collation**: [ICU-21894](#issue-icu-21894)
 - **conversion**: [ICU-21894](#issue-icu-21894)
 - **format_number**: [ICU-21322](#issue-icu-21322)
 - **others**: [ICU-21814](#issue-icu-21814) [ICU-21843](#issue-icu-21843) [ICU-21815](#issue-icu-21815) [ICU-21816](#issue-icu-21816)
 - **team_processes_tools**: [ICU-21824](#issue-icu-21824) [ICU-21900](#issue-icu-21900)
 - **textbounds**: [ICU-21699](#issue-icu-21699) [ICU-21878](#issue-icu-21878)
 - **time_calc**: [ICU-21918](#issue-icu-21918)
 - **units**: [ICU-21379](#issue-icu-21379) [ICU-21862](#issue-icu-21862)


#### Issue ICU-21322

_Jira issue is open_
- ICU-21322: `replace FixedDecimal with DecimalQuantity for plural rule samples`
	- Assigned to Elango Cheran
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21322
	- Status: Accepted
	- Fix Version: 71.1
	- Component(s): format_number

##### Commits with Issue ICU-21322

- f79f03d `ICU-21322 Add parse and format methods for DecimalQuantity with exponent`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2022-03-08T15:56:50-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/f79f03dad5ffcd0e7ac9e1bcbd05fc38bff8e3a2

#### Issue ICU-21379

_Jira issue is open_
- ICU-21379: `Part 1: Enhance mechanism for controlling display options and results`
	- Assigned to Younies Mahmoud
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21379
	- Status: Accepted
	- Fix Version: 71.1
	- Component(s): units

##### Commits with Issue ICU-21379

- c86a2bd `ICU-21379 Add getNounClass and enum NounClass`
	- Authored by younies <younies@chromium.org>
	- Committed at 2022-03-02T23:15:17+01:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/c86a2bd7d79c9a221013d1d9b174898ef77e1f01

#### Issue ICU-21699

_Jira issue is open_
- ICU-21699: `line breaking for Japanese unit base breaking`
	- Assigned to Hiroyuki Komatsu
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21699
	- Status: Accepted
	- Fix Version: 71.1
	- Component(s): textbounds

##### Commits with Issue ICU-21699

- 7d825cb `ICU-21699 Add some more particles`
	- Authored by allenwtsu <allenwtsu@google.com>
	- Committed at 2022-02-21T08:54:54-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/7d825cb20401f232bf1b15eafee53e1b35f750f1

- a7b2d9d `ICU-21699 Add Japanese particle`
	- Authored by allenwtsu <allenwtsu@google.com>
	- Committed at 2022-02-10T18:50:41-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/a7b2d9dae17db64ed032f9f6171add1c3eda4663

- 2a7c465 `ICU-21699 Add breakpoint between Japanese and Alphabet`
	- Authored by allenwtsu <allenwtsu@google.com>
	- Committed at 2022-02-09T21:12:49-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/2a7c4652849aea1ea3d69500770c57f88f846b29

- c882c94 `ICU-21699 Revise rule file`
	- Authored by allenwtsu <allenwtsu@google.com>
	- Committed at 2022-02-09T09:53:00-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/c882c94d838578b5efe40e68019b6335fc7bd6cf

- a67bb90 `ICU-21699 Refactor codeunit handling`
	- Authored by allenwtsu <allenwtsu@google.com>
	- Committed at 2022-01-26T15:41:34-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/a67bb901508d19abacb78d9ffea4c47f0b3c477b

- 8528bef `ICU-21699 Phrase based breaking(Java)`
	- Authored by allenwtsu <allenwtsu@google.com>
	- Committed at 2022-01-21T13:11:59-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/8528bef5965d0ce11a888caa752ee13b50229887

- c9fae4b `ICU-21699 Concatenate Katakana chars`
	- Authored by allensu05 <52812914+allensu05@users.noreply.github.com>
	- Committed at 2022-01-19T23:07:22-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/c9fae4bda44f4976772e207f054f00b18d61debd

- 470e44c `ICU-21699 Separate lb and lw`
	- Authored by allenwtsu <allenwtsu@google.com>
	- Committed at 2022-01-19T22:46:18-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/470e44c55143ef8a4ddab7d593e4a77f5cff8f39

- d0290c0 `ICU-21699 Phrase based breaking(C++)`
	- Authored by allenwtsu <allenwtsu@google.com>
	- Committed at 2022-01-13T20:22:05-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/d0290c03db0f507f3690e8bbef5e4caa9a817516

- 06ef886 `ICU-21699 Fix CjkBreakEngine performance issue`
	- Authored by allenwtsu <allenwtsu@google.com>
	- Committed at 2022-01-11T16:46:32-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/06ef8867f35befee7340e35082fefc9d3561d230

#### Issue ICU-21814

_Jira issue is open_
- ICU-21814: `ICU 71 docs minor fixes`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21814
	- Status: Accepted
	- Fix Version: 71.1
	- Component(s): others

##### Commits with Issue ICU-21814

- fc3ca70 `ICU-21814 Fix broken links in icu_data/index.md`
	- Authored by Shane F. Carr <sffc@google.com>
	- Committed at 2022-02-22T15:41:20-07:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/fc3ca702e9ded20bd454d94fb9c067fb1848fb08

- d3a56c5 `ICU-21814 fix typo ConstrainableFieldPosition`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2021-11-08T11:24:56-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/d3a56c5ceda272054e7c6bf7e62b4b51367eecf5

#### Issue ICU-21815

_Jira issue is open_
- ICU-21815: `ICU 71 code warnings/version updates`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21815
	- Status: Accepted
	- Fix Version: 71.1
	- Component(s): others

##### Commits with Issue ICU-21815

- fb31d9b `ICU-21815 Bump xercesImpl from 2.12.0 to 2.12.2 in /tools/release/java`
	- Authored by dependabot[bot] <49699333+dependabot[bot]@users.noreply.github.com>
	- Committed at 2022-02-02T14:34:24-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/fb31d9b54be3efc652eeebaa5577e2739fc40de3

#### Issue ICU-21816

_Jira issue is open_
- ICU-21816: `CI: Test ICU4C Samples and Demos`
	- Assigned to Craig Cornelius
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21816
	- Status: Accepted
	- Fix Version: 71.1
	- Component(s): others

##### Commits with Issue ICU-21816

- 87e3139 `ICU-21816 Add ICU4C samples check to workflow for BRS "Test C Samples"`
	- Authored by Craig Cornelius <cwcornelius@gmail.com>
	- Committed at 2022-03-02T09:25:52-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/87e31395dad46cc8e34db49f68adc7d2f2e95b3d

#### Issue ICU-21824

_Jira issue is open_
- ICU-21824: `add CONTRIBUTING.md, update license text`
	- Assigned to Steven R. Loomis
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21824
	- Status: Accepted
	- Fix Version: 71.1
	- Component(s): team_processes_tools

##### Commits with Issue ICU-21824

- 55b9f7c `ICU-21824 add a basic CONTRIBUTING.md`
	- Authored by Steven R. Loomis <srl295@gmail.com>
	- Committed at 2021-11-12T09:24:58-06:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/55b9f7cd517a086d71400cdbbc19106cd35956c4

#### Issue ICU-21843

_Jira issue is open_
- ICU-21843: `Developing an adequate performance methodology to easy measure ICU APIs performance`
	- Assigned to Norbert Runge
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21843
	- Status: Accepted
	- Fix Version: 71.1
	- Component(s): others

##### Commits with Issue ICU-21843

- 80ee559 `ICU-21843 Add ICU4C performance tests to continuous integration`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2022-03-07T12:53:44-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/80ee559205dd165c2d647610376d6f9a06822ae4

- e951f4a `ICU-21843 Modifies performance tests and test framework in preparation of`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2022-02-11T11:29:19-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/e951f4aec4600a3fbec9d7ff2252f2550a3856ec

#### Issue ICU-21862

_Jira issue is open_
- ICU-21862: `Determine desired behaviour for 1/0 in inverse conversions`
	- Assigned to Hugo van der Merwe
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21862
	- Status: Accepted
	- Fix Version: 71.1
	- Component(s): units

##### Commits with Issue ICU-21862

- 44c7137 `ICU-21862 icu4c unit conversions: support inverting 0 and Infinity (for vehicle-fuel)`
	- Authored by Hugo van der Merwe <17109322+hugovdm@users.noreply.github.com>
	- Committed at 2022-01-09T04:04:06-06:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/44c7137ae55a630d591ab37e5ee1a97f0b991ff4

#### Issue ICU-21878

_Jira issue is open_
- ICU-21878: `Sync CjkBreakEngine logic from icu4j to icu4c for word breaking`
	- Assigned to Allen
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21878
	- Status: Accepted
	- Fix Version: 71.1
	- Component(s): textbounds

##### Commits with Issue ICU-21878

- 08c3f99 `ICU-21878 Sync icu4j's CjkBreakEngine to icu4c's`
	- Authored by allenwtsu <allenwtsu@google.com>
	- Committed at 2021-12-30T14:47:37-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/08c3f99c0882ea84aebadd0fdb73f4d92fad859e

#### Issue ICU-21894

_Jira issue is open_
- ICU-21894: `A modern version of ucol_safeClone and ucnv_safeClone API`
	- Assigned to Victor Chang
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21894
	- Status: Accepted
	- Fix Version: 71.1
	- Component(s): collation conversion

##### Commits with Issue ICU-21894

- 397cbb9 `ICU-21894 A modern version of ucol_safeClone and ucnv_safeClone API`
	- Authored by Victor Chang <vichang@google.com>
	- Committed at 2022-02-01T16:41:49+00:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/397cbb9530b613210ce8a486f8a94d058eec8c41

#### Issue ICU-21900

_Jira issue is open_
- ICU-21900: `ICU 71rc BRS`
	- Assigned to Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21900
	- Status: Accepted
	- Fix Version: 71.1
	- Component(s): team_processes_tools

##### Commits with Issue ICU-21900

- 7f044ee `ICU-21900 ICU4J: Promote all '@draft ICU 69' to '@stable'`
	- Authored by Craig Cornelius <cwcornelius@gmail.com>
	- Committed at 2022-03-02T10:47:00-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/7f044eeb7a7553e956d6aedfbd2dec57b34deeb0

- 0ce0d1a `ICU-21900 check non-stable API macros, fix missing U_DEPRECATED`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2022-03-02T10:34:16-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/0ce0d1aa5d58023986367c704e2dc00b82cc321a

- 512a679 `ICU-21900 Ticket ICU-8989 is fixed but CLDR-4375 remains open. Change the`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2022-02-28T12:55:21-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/512a679aba22e144a4443df5f8f304e4f8b39054

- a723bdf `ICU-21900 Bookkeeping of CLDR tickets in TODO() comments: CLDR-14502 was closed`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2022-02-28T11:48:22-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/a723bdf49402cb9046a92684c29da8ce064f6b2f

- bf6b323 `ICU-21900 Fix ICU4C sample dtitvfmtsample segfault and update healthy code doc`
	- Authored by Craig Cornelius <cwcornelius@gmail.com>
	- Committed at 2022-02-25T15:28:03-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/bf6b3236a325161ab2126bc789c3a9935564d66f

- 475703c `ICU-21900 Fix ICU4C sample build and execution`
	- Authored by Craig Cornelius <cwcornelius@gmail.com>
	- Committed at 2022-02-25T11:08:16-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/475703cd402acc09fd0d19d9cf2bf04006e124f0

- 16aae80 `ICU-21900 integrate CLDR release-41-alpha4 to ICU main for 71 front-load`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2022-02-24T09:15:02-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/16aae801991a973a9e715483f726943f3a490ff7

- fcca132 `ICU-21900 Fix issues found while running samples.`
	- Authored by Jeff Genovy <29107334+jefgen@users.noreply.github.com>
	- Committed at 2022-02-23T14:58:07-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/fcca13200fcd0f96749bbe4bea25f2cbb6b5742c

- c626c6d `ICU-21900 Update double-conversion to v3.2.0`
	- Authored by Shane F. Carr <shane@unicode.org>
	- Committed at 2022-02-23T13:18:32-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/c626c6df5cda7bd892a44a7caef915f9f6b197a5

- 9907ca8 `ICU-21900 BRS71 Updating currency numeric code data.`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2022-02-23T13:18:06-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/9907ca8ea3d09f7c40ce042e9d2a715e3f31a72e

- 94197b8 `ICU-21900 Promote all @draft ICU 69 APIs to @stable ICU 69`
	- Authored by Rich Gillam <62772518+richgillam@users.noreply.github.com>
	- Committed at 2022-02-23T12:04:59-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/94197b84b8e9cbb9af2f82222ddca042eab8439b

- 5489287 `ICU-21900 BRS71 Update license files`
	- Authored by Yoshito Umaoka <yumaoka@users.noreply.github.com>
	- Committed at 2022-02-23T11:40:17-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/5489287998c846e86dd37ff88f36358ef3a2ac39

- e3ebc7a `ICU-21900 integrate CLDR release-41-alpha3 to ICU main for 71 front-load`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2022-02-23T09:19:12-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/e3ebc7aac514c780a9f3b5cbc6c2d81c9f127922

- bac48c8 `ICU-21900 With ICU-13353 being fixed, remove code that was added to work around`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2022-02-23T08:29:07-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/bac48c8f9d4fe19d9e63a8f7d51261e0ac82f8a6

- 335c403 `ICU-21900 Remove 'logKnownIssue(...)' protection now that ICU-21714 is fixed.`
	- Authored by gnrunge <nrunge@google.com>
	- Committed at 2022-02-22T10:22:56-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/335c403618433d1e7b5a66b998f04229371bf7b6

- 9df5f09 `ICU-21900 BRS 71rc, update urename.h`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2022-02-21T19:09:44-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/9df5f09d8fb794097ceded4a819f1bc96c597dda

- 53f4ddf `ICU-21900 BRSRC 71.0.1 Version update and regenerate configure `
	- Authored by Erik Torres <ertorres@microsoft.com>
	- Committed at 2022-02-17T14:00:19-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/53f4ddf2781d8a6af1454a9794aca049c6216842

- 398489b `ICU-21900 integrate CLDR release-41-alpha2 to ICU main for 71 front-load`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2022-02-15T21:51:09-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/398489b9154d9ccbcf493b69fff4925d2200e3b1

- 008fddf `ICU-21900 integrate CLDR release-41-alpha1 to ICU main for 71 front-load`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2022-02-14T12:09:15-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/008fddfaacc2d0923886310f13fd16f613b516d8

- 205144e `ICU-21900 MeasureUnit update; just marks mg-ofGlucose-perDeciliter as stable`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2022-02-08T11:45:33-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/205144e3912d6bcf23f7fcba04f95fdfa2b4ea70

- 2f8749a `ICU-21900 integrate CLDR release-41-alpha0 to ICU main for 71 front-load`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2022-02-07T22:02:36-08:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/2f8749a026f3ddc8cf54d4622480b7c543bb7fc0

#### Issue ICU-21918

_Jira issue is open_
- ICU-21918: `TestShortZoneIDs test failure after trying to update ICU version number to 71.0.1`
	- Assigned to Yoshito Umaoka
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21918
	- Status: Accepted
	- Fix Version: 71.1
	- Component(s): time_calc

##### Commits with Issue ICU-21918

- 143dd6a `ICU-21918 Updated expected useDaylightTime() value for MIT (Asia/Apia).`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2022-02-17T09:47:39-05:00
	- GitHub Link: https://github.com/unicode-org/icu/commit/143dd6ad6f87ff96cf0274f1e111c36575e1ac94

### Issue is under Review

[🔝Top](#table-of-contents)

These issues are otherwise accounted for above, but are in review.
- ICU-21592: `Match the CJ line breaker rules to the updates of CSS specs`
	- _Issue is under Review_
	- Assigned to Peter Edberg
	- Reviewer: Frank Yung-Fong Tang
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21592
	- Status: Reviewing
	- Fix Version: 71.1
	- Component(s): textbounds
- ICU-21613: `FAIL: NaN meter-and-centimeter: Unsafe Path; got "9\u00A0223\u00A0372\u00A0036\u00A0854\u00A0775\u00A0807 m, NaN cm"; expected "0 m, NaN cm"`
	- _Issue is under Review_
	- Assigned to Hugo van der Merwe
	- Reviewer: Shane Carr
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21613
	- Status: Reviewing
	- Fix Version: 71.1
	- Component(s): units
- ICU-21765: `Add UNUM_APPROXIMATELY_SIGN_FIELD to UNumberFormatFields`
	- _Issue is under Review_
	- Assigned to Shane Carr
	- Reviewer: Frank Yung-Fong Tang
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21765
	- Status: Reviewing
	- Fix Version: 71.1
	- Component(s): format_number
- ICU-21801: `uspoof_impl.cpp:948: bad compare`
	- _Issue is under Review_
	- Assigned to Shane Carr
	- Reviewer: Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21801
	- Status: Reviewing
	- Fix Version: 71.1
	- Component(s): normalization
- ICU-21863: `Fix divide-by-zero in ICU4J when formatting 0 fuel consumption (mpg <-> l/100km)`
	- _Issue is under Review_
	- Assigned to Hugo van der Merwe
	- Reviewer: Shane Carr
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21863
	- Status: Reviewing
	- Fix Version: 71.1
	- Component(s): units
- ICU-21881: `TrailingZeroDisplay is ignored when RoundingMode is specified`
	- _Issue is under Review_
	- Assigned to Shane Carr
	- Reviewer: Markus Scherer
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21881
	- Status: Reviewing
	- Fix Version: 71.1
	- Component(s): format_number
- ICU-21908: `Support arbitrary-precision rounding increment in ICU4C`
	- _Issue is under Review_
	- Assigned to Shane Carr
	- Reviewer: Frank Yung-Fong Tang
	- Jira Link: https://unicode-org.atlassian.net/browse/ICU-21908
	- Status: Reviewing
	- Fix Version: 71.1
	- Component(s): format_number

## Total Problems: 15
## Issues under review: 7
