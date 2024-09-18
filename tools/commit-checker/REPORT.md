## Collected 0 commit(s) to exclude
<!--
Copyright (C) 2021 and later: Unicode, Inc. and others.
License & terms of use: http://www.unicode.org/copyright.html
-->
Commit Report
=============

Environment:
- Now: 2024-09-18T16:25:45.619468
- Latest Commit: https://github.com/unicode-org/icu/commit/09c5aa1b7449fce136adf42a22ad13f0acb98aac
- Jira Query: `project=ICU AND fixVersion=76.1`
- Rev Range: `release-75-1..upstream/main`
- Authenticated: `Yes`

-----
-----
_(anything between the above two lines is an error)_

Total problem(s): 26

## Table Of Contents
Note: empty categories are omitted.
- [Closed Issues with No Commit](#closed-issues-with-no-commit) 1
- _Closed Issues with Commit Policy Problems_
- _Commits without Jira Issue Tag_
- _Commits with Jira Issue Not Found_
- [Commits with Open Jira Issue](#commits-with-open-jira-issue) 25
- _Issue is under Review_
- _Excluded Commits_

## Problem Categories
### Closed Issues with No Commit
[🔝Top](#table-of-contents)

_1 item(s)_
ICU Tip: If commits aren't expected, change the ticket type to 'Task' or 'User Guide' or set the resolution to one such as 'Fixed by other ticket' or 'Fix Non-repo'.
CLDR Tip: Change the ticket type or set the resolution to one such as 'Fixed by other ticket' or 'Fix Non-repo' if commits aren't expected.

- [ICU-22394](https://unicode-org.atlassian.net/browse/ICU-22394): ``uloc_getLanguage()` doesn't obey `ULOC_LANG_CAPACITY``
	- _Closed Issues with No Commit_
	- Assigned to Markus Scherer
	- Status: Done
	- Resolution: Fixed
	- Fix Version: 76.1
	- Component(s): collation locale_id parser


### Commits with Open Jira Issue
[🔝Top](#table-of-contents)

_25 item(s)_
Tip: Consider closing the ticket if it is fixed.

#### Open Issues by Component

 - **api_for_locale_data**: [ICU-22374](#issue-icu-22374)
 - **build_c**: [ICU-22787](#issue-icu-22787) [ICU-22873](#issue-icu-22873) [ICU-22764](#issue-icu-22764)
 - **build_j**: [ICU-22606](#issue-icu-22606)
 - **conversion**: [ICU-22596](#issue-icu-22596)
 - **data_loading_rb_svc**: [ICU-21809](#issue-icu-21809)
 - **format_message**: [ICU-22834](#issue-icu-22834) [ICU-22893](#issue-icu-22893) [ICU-22794](#issue-icu-22794)
 - **format_number**: [ICU-22800](#issue-icu-22800)
 - **locale_id**: [ICU-22696](#issue-icu-22696) [ICU-22877](#issue-icu-22877)
 - **normalization**: [ICU-22642](#issue-icu-22642)
 - **others**: [ICU-22793](#issue-icu-22793) [ICU-22722](#issue-icu-22722) [ICU-22721](#issue-icu-22721)
 - **strings**: [ICU-22843](#issue-icu-22843)
 - **team_processes_tools**: [ICU-22745](#issue-icu-22745) [ICU-22723](#issue-icu-22723) [ICU-22724](#issue-icu-22724)
 - **test_fmwk_util**: [ICU-21205](#issue-icu-21205) [ICU-22716](#issue-icu-22716) [ICU-22814](#issue-icu-22814) [ICU-22801](#issue-icu-22801)


#### Issue ICU-21205

_Jira issue is open_
- [ICU-21205](https://unicode-org.atlassian.net/browse/ICU-21205): `Deduplicate C & Java testdata to a common directory`
	- No assignee!
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): test_fmwk_util

##### Commits with Issue ICU-21205

- [40189ff](https://github.com/unicode-org/icu/commit/40189ffe575c66e2acef294765acbf23e653fe76) [ICU-21205](https://unicode-org.atlassian.net/browse/ICU-21205) `Fix Eclipse failing to import the icu4j maven project`
	- Authored by Mihai Nita <mnita@google.com>
	- Committed at 2024-08-16T13:38:56-07:00

#### Issue ICU-21809

_Jira issue is open_
- [ICU-21809](https://unicode-org.atlassian.net/browse/ICU-21809): `Possible memory leak in ures_swap`
	- Assigned to Markus Scherer
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): data_loading_rb_svc

##### Commits with Issue ICU-21809

- [f48944e](https://github.com/unicode-org/icu/commit/f48944e06297bb5b3ac4ebfa122d3ebceccab51d) [ICU-21809](https://unicode-org.atlassian.net/browse/ICU-21809) `Possible memory leak of tempTable.resFlags`
	- Authored by Makoto Kato <m_kato@ga2.so-net.ne.jp>
	- Committed at 2024-06-18T13:49:23-07:00

#### Issue ICU-22374

_Jira issue is open_
- [ICU-22374](https://unicode-org.atlassian.net/browse/ICU-22374): `warning fix with UCONFIG_NO_COLLATION`
	- Assigned to Steven R. Loomis
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): api_for_locale_data

##### Commits with Issue ICU-22374

- [9bb4536](https://github.com/unicode-org/icu/commit/9bb4536ad77652b7d0da2794a10c6ccf0064a6cf) [ICU-22374](https://unicode-org.atlassian.net/browse/ICU-22374) `guard gCollationBinKey behind if !UCONFIG_NO_COLLATION`
	- Authored by Steven R. Loomis <srl295@gmail.com>
	- Committed at 2024-08-24T17:39:30-05:00

#### Issue ICU-22596

_Jira issue is open_
- [ICU-22596](https://unicode-org.atlassian.net/browse/ICU-22596): `Update CP1388 mapping for GB18030-2022`
	- Assigned to Yoshito Umaoka
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): conversion

##### Commits with Issue ICU-22596

- [394bebd](https://github.com/unicode-org/icu/commit/394bebdb46d6ca34d785d162e720f6bcab70608a) [ICU-22596](https://unicode-org.atlassian.net/browse/ICU-22596) `IBM-1388 converter data update`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2024-09-09T09:23:41-04:00

#### Issue ICU-22606

_Jira issue is open_
- [ICU-22606](https://unicode-org.atlassian.net/browse/ICU-22606): `Make the ICU4J release easier (more predictable / consistent, less dependent on human actions)`
	- Assigned to Mihai Nita
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): build_j

##### Commits with Issue ICU-22606

- [edbf020](https://github.com/unicode-org/icu/commit/edbf02094f6105f45873947a3509ebcbc43ddf14) [ICU-22606](https://unicode-org.atlassian.net/browse/ICU-22606) `Correct urls in the scm entry; fix JCite styles in javadoc`
	- Authored by Mihai Nita <mnita@google.com>
	- Committed at 2024-08-31T15:37:10-07:00

- [eda184e](https://github.com/unicode-org/icu/commit/eda184e6af63d6eee1b3a59c61d1695eef44fcb4) [ICU-22606](https://unicode-org.atlassian.net/browse/ICU-22606) `Make the ICU4J release easier & more predictable`
	- Authored by Mihai Nita <mnita@google.com>
	- Committed at 2024-08-29T12:55:59-07:00

#### Issue ICU-22642

_Jira issue is open_
- [ICU-22642](https://unicode-org.atlassian.net/browse/ICU-22642): `CanonicalIterator::getEquivalents2 could take wait too long to run`
	- Assigned to Markus Scherer
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): normalization

##### Commits with Issue ICU-22642

- [87fce24](https://github.com/unicode-org/icu/commit/87fce2423373e1e89049b0f43b4881b456414216) [ICU-22642](https://unicode-org.atlassian.net/browse/ICU-22642) `Avoid spending too much time inside CanonicalIterator`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-06-06T12:48:59+02:00

#### Issue ICU-22696

_Jira issue is open_
- [ICU-22696](https://unicode-org.atlassian.net/browse/ICU-22696): `Improve memory management in the locale code (ICU 76)`
	- Assigned to Fredrik Roubert
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): locale_id

##### Commits with Issue ICU-22696

- [bae2aa6](https://github.com/unicode-org/icu/commit/bae2aa65d8e99efbd4643ddb2da3cc71701e5070) [ICU-22696](https://unicode-org.atlassian.net/browse/ICU-22696) `Avoid unnecessary copies of already NUL terminated strings.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-08-13T21:15:26+02:00

- [7ffbe77](https://github.com/unicode-org/icu/commit/7ffbe77e12d109b8624037994959adba8bb6f6c8) [ICU-22696](https://unicode-org.atlassian.net/browse/ICU-22696) `Update ulocimp_setKeywordValue() to use std::string_view.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-08-13T14:03:18+02:00

- [8a6d59e](https://github.com/unicode-org/icu/commit/8a6d59ec80b5229ac2bfa1c3c4202106e2b821f1) [ICU-22696](https://unicode-org.atlassian.net/browse/ICU-22696) `Update ulocimp_to*{Key,Type}() to use std::string_view.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-08-07T14:14:23+02:00

- [dd65ee3](https://github.com/unicode-org/icu/commit/dd65ee3f0b3995ba1b7efcfa0b3bcfe944c0b1fa) [ICU-22696](https://unicode-org.atlassian.net/browse/ICU-22696) `Update ulocimp_getKeywordValue() to use std::string_view.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-07-31T15:39:15+02:00

- [10fe2a6](https://github.com/unicode-org/icu/commit/10fe2a6110dfcdf160e95161cb9142bbb0883e8f) [ICU-22696](https://unicode-org.atlassian.net/browse/ICU-22696) `Add uhash support for std::string_view.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-07-30T06:45:43+02:00

- [8891c07](https://github.com/unicode-org/icu/commit/8891c070bddedb626569cb9b432bf2e11d9ab1bd) [ICU-22696](https://unicode-org.atlassian.net/browse/ICU-22696) `Add implicit conversion from StringPiece to std::string_view.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-07-30T06:45:33+02:00

- [5d7cbdb](https://github.com/unicode-org/icu/commit/5d7cbdbc025160a51d96118450c7d1ea1a34e4d8) [ICU-22696](https://unicode-org.atlassian.net/browse/ICU-22696) `Delete unused code.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-07-29T22:03:10+02:00

#### Issue ICU-22716

_Jira issue is open_
- [ICU-22716](https://unicode-org.atlassian.net/browse/ICU-22716): `improve fuzzer coverage for ICU 76`
	- Assigned to Frank Yung-Fong Tang
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): test_fmwk_util

##### Commits with Issue ICU-22716

- [70caba0](https://github.com/unicode-org/icu/commit/70caba0027cbe381565db174184514c667a93b8a) [ICU-22716](https://unicode-org.atlassian.net/browse/ICU-22716) `Turn on message_formatter_fuzzer`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-09-12T14:53:01-07:00

- [36555b7](https://github.com/unicode-org/icu/commit/36555b780029f2a739c527505dc66ac24f98fc08) [ICU-22716](https://unicode-org.atlassian.net/browse/ICU-22716) `Temp turn off message_formatter_fuzzer`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-09-11T12:12:36-07:00

- [4f246ab](https://github.com/unicode-org/icu/commit/4f246ab17fdab0299bd07f7511f6bae60bdd0246) [ICU-22716](https://unicode-org.atlassian.net/browse/ICU-22716) `Test VTimeZone in fuzzer`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-09-10T22:51:12-07:00

- [1c3bf0b](https://github.com/unicode-org/icu/commit/1c3bf0bf820c51ee80e575a7803a62ba47637954) [ICU-22716](https://unicode-org.atlassian.net/browse/ICU-22716) `Extend Collator fuzzing`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-09-10T22:51:00-07:00

- [3a74fcf](https://github.com/unicode-org/icu/commit/3a74fcf052fee4c89ff92107cf3f22f8ae3bea03) [ICU-22716](https://unicode-org.atlassian.net/browse/ICU-22716) `Test more number format`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-09-10T22:50:47-07:00

- [266a2b8](https://github.com/unicode-org/icu/commit/266a2b8de2220ba9af789d6e9960616174c68dc6) [ICU-22716](https://unicode-org.atlassian.net/browse/ICU-22716) `Add MessageFormat fuzzer`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-09-10T22:50:33-07:00

- [4ef5832](https://github.com/unicode-org/icu/commit/4ef58328d04633ad90fa89e7f7cbbd89e2d16b2e) [ICU-22716](https://unicode-org.atlassian.net/browse/ICU-22716) `Reduce the data size to test calendar fuzzer`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-09-05T11:17:07-07:00

- [cf7ff1b](https://github.com/unicode-org/icu/commit/cf7ff1b0a508c216c57b61badfa44681cf0978fc) [ICU-22716](https://unicode-org.atlassian.net/browse/ICU-22716) `Set smaller timeout limit for uregex_match_fuzzer`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-06-24T14:06:08-07:00

- [86add69](https://github.com/unicode-org/icu/commit/86add69c928141d69d8138da43012720b283dc53) [ICU-22716](https://unicode-org.atlassian.net/browse/ICU-22716) `Set timeout limit for uregex_match_fuzzer`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-06-21T11:49:55-07:00

- [e5b8660](https://github.com/unicode-org/icu/commit/e5b8660a463821f2c4880cabdfd96f1c0395f24f) [ICU-22716](https://unicode-org.atlassian.net/browse/ICU-22716) `Add uregex_match_fuzzer`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-06-17T20:06:41-07:00

#### Issue ICU-22721

_Jira issue is open_
- [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721): `ICU 76 code warnings/version updates`
	- Assigned to Markus Scherer
	- Status: Accepted
	- Fix Version: 76.1
	- Fix Version: 75.2
	- Component(s): others

##### Commits with Issue ICU-22721

- [33a788b](https://github.com/unicode-org/icu/commit/33a788b35382028f9e8ab95321060a18388a474f) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Set delay for CI enforce checks job to allow other jobs to init`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-09-12T15:18:28-07:00

- [923d02f](https://github.com/unicode-org/icu/commit/923d02f8d1d3c6e701f06a738ecde9a74a108234) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Bump the github-actions group across 1 directory with 3 updates`
	- Authored by dependabot[bot] <49699333+dependabot[bot]@users.noreply.github.com>
	- Committed at 2024-09-12T10:55:16-07:00

- [f6b274a](https://github.com/unicode-org/icu/commit/f6b274a197d62ac1b7453aba70e3c99f9df307de) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Enhance #if for locdispnames.cpp`
	- Authored by LamTrinh.Dev <me@lamtrinh.dev>
	- Committed at 2024-09-10T14:32:14-07:00

- [37b2bc6](https://github.com/unicode-org/icu/commit/37b2bc6999c1de45d739a57d13cfbd92a593cc1d) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Use correct initializer list syntax.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-08-13T21:33:53-07:00

- [ee93218](https://github.com/unicode-org/icu/commit/ee93218eabd72406d81f8a1c92a6b9249ceb4de9) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Simplify wait-for-checks match logic`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-07-11T05:19:59-07:00

- [f668bc5](https://github.com/unicode-org/icu/commit/f668bc5218c9eda9ba6df453ccba3642f0f2c21c) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Add workflow that enforces required checks`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-06-30T21:21:16-07:00

- [2e00f38](https://github.com/unicode-org/icu/commit/2e00f3866013eba7cd6532aa508db58e5cabc533) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Prevent redundant concurrent CI runs on the same PR branch`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-06-30T14:13:33-07:00

- [8f6ba2a](https://github.com/unicode-org/icu/commit/8f6ba2a7a520ad6bad4fe9b7366e988f590d0ec0) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Correct format specifier for type int32_t (-Wformat).`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-06-18T09:57:56-07:00

- [e6674c7](https://github.com/unicode-org/icu/commit/e6674c736079daebf24a5f8c6815687ef486fe48) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Set all fields in initializer (-Wmissing-field-initializers).`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-06-18T09:57:56-07:00

- [471c2ce](https://github.com/unicode-org/icu/commit/471c2ce03b7775b78f6a34f6cac26e0cf24098ac) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Delete unused variable (-Wunused-variable).`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-06-18T09:57:56-07:00

- [4f7b73d](https://github.com/unicode-org/icu/commit/4f7b73dfdb79003b386e34e209c79b830fb9def1) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Bump the github-actions group with 2 updates`
	- Authored by dependabot[bot] <49699333+dependabot[bot]@users.noreply.github.com>
	- Committed at 2024-06-06T13:16:39-07:00

- [ed52e0a](https://github.com/unicode-org/icu/commit/ed52e0a25b084b71bad0272b73b7f9634b615fb5) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Rename scoped variable to not shadow variable in outer scope.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-05-14T19:03:14+02:00

- [564c92d](https://github.com/unicode-org/icu/commit/564c92d666354a8ed0f99cba0f239eba790bd148) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Delete obsolete __STRICT_ANSI__ workaround for MinGW.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-05-10T16:11:21-07:00

- [1c7d7f9](https://github.com/unicode-org/icu/commit/1c7d7f9a9598930c76980171d6d2e902fc89823a) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Bump the github-actions group with 4 updates`
	- Authored by dependabot[bot] <49699333+dependabot[bot]@users.noreply.github.com>
	- Committed at 2024-05-03T15:36:34-07:00

- [755b098](https://github.com/unicode-org/icu/commit/755b0981ec0af447c51fa362cbf9d143fa56092c) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Reorder initializer to match declaration (-Wreorder-ctor).`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-04-29T11:44:35-07:00

- [d7c1f6b](https://github.com/unicode-org/icu/commit/d7c1f6b55d96f2cb142e7e45316c45193dc03c4c) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Add missing const (-Wwritable-strings).`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-04-29T11:44:35-07:00

- [d7a1815](https://github.com/unicode-org/icu/commit/d7a1815c3dd355b8ef2b6af7c0530518d68c8e0c) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Remove superfluous semicolons (-Wextra-semi).`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-04-29T11:44:35-07:00

- [8b84ae1](https://github.com/unicode-org/icu/commit/8b84ae1ddae19412d5fecc88661593136a6f6144) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Comment out variables only used in commented out code.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-04-29T11:43:21-07:00

- [ec57da8](https://github.com/unicode-org/icu/commit/ec57da86519ac347bda40acae7b339b442f684db) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Delete unused variables.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-04-29T11:43:21-07:00

- [a7e23a5](https://github.com/unicode-org/icu/commit/a7e23a531c9f35ad804e3ae161ac0179745a6888) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Clang-Tidy: modernize-use-override`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-04-29T19:28:40+02:00

- [0312308](https://github.com/unicode-org/icu/commit/0312308566b5a232102d1bce41070b0498cd8579) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Prevent inconsistent ICU4J Maven deploys via CI`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-04-22T15:28:56-07:00

- [4c9770f](https://github.com/unicode-org/icu/commit/4c9770f73d8bafee7fe63dc6f6fbf2947ba78839) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Remove now obsolete disabled warnings for LocalPointerBase.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-04-22T21:58:17+02:00

- [a864558](https://github.com/unicode-org/icu/commit/a86455825ab231bdad57acaf5ae633915ccc7527) [ICU-22721](https://unicode-org.atlassian.net/browse/ICU-22721) `Bump the github-actions group with 2 updates`
	- Authored by dependabot[bot] <49699333+dependabot[bot]@users.noreply.github.com>
	- Committed at 2024-04-04T21:26:56-04:00

#### Issue ICU-22722

_Jira issue is open_
- [ICU-22722](https://unicode-org.atlassian.net/browse/ICU-22722): `ICU 76 docs minor fixes`
	- Assigned to Markus Scherer
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): others

##### Commits with Issue ICU-22722

- [3205630](https://github.com/unicode-org/icu/commit/32056302fc9a462d74e0694eac532f5d1ab428c9) [ICU-22722](https://unicode-org.atlassian.net/browse/ICU-22722) `Add example code for UnicodeString and the standard library.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-09-18T18:08:24+02:00

- [4433a94](https://github.com/unicode-org/icu/commit/4433a94a577ab3d1f63d7d40d772f1a3d1e2f3c3) [ICU-22722](https://unicode-org.atlassian.net/browse/ICU-22722) `toTitle does not use UTR 21`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-09-12T16:05:33-07:00

- [c7caebd](https://github.com/unicode-org/icu/commit/c7caebd823d4ec68f16b65a642a3e74228dae861) [ICU-22722](https://unicode-org.atlassian.net/browse/ICU-22722) `Prevent running PR check enforcement after merging PRs`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-09-11T13:33:58-07:00

- [263c735](https://github.com/unicode-org/icu/commit/263c73540056d20518b383184edbb0afc777cf30) [ICU-22722](https://unicode-org.atlassian.net/browse/ICU-22722) `Remove old announcement of default git branch name`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-09-10T14:36:29-07:00

- [1414e80](https://github.com/unicode-org/icu/commit/1414e80f6c1376afa65eb388aaaafb53169fc3dc) [ICU-22722](https://unicode-org.atlassian.net/browse/ICU-22722) `Add RelativeDateTimeFormatter to main API page via docmain.h`
	- Authored by Craig Cornelius <cwcornelius@gmail.com>
	- Committed at 2024-08-27T14:53:04-07:00

- [305098b](https://github.com/unicode-org/icu/commit/305098bdf8cba7a60daf24c9529765dd03abea0d) [ICU-22722](https://unicode-org.atlassian.net/browse/ICU-22722) `Update README.md`
	- Authored by Steven R. Loomis <srl295@gmail.com>
	- Committed at 2024-08-19T13:41:03-05:00

- [f4a0463](https://github.com/unicode-org/icu/commit/f4a04631cd079ff141176f3c4d523198f151eb9e) [ICU-22722](https://unicode-org.atlassian.net/browse/ICU-22722) `Bump the github-actions group across 1 directory with 4 updates`
	- Authored by dependabot[bot] <49699333+dependabot[bot]@users.noreply.github.com>
	- Committed at 2024-08-15T17:52:40-04:00

- [366bb46](https://github.com/unicode-org/icu/commit/366bb463b10401776499fc7c6f5eeb0a43252bdd) [ICU-22722](https://unicode-org.atlassian.net/browse/ICU-22722) `Update the ICU Vice-Chair for Maven publishing`
	- Authored by Mihai Nita <mnita@google.com>
	- Committed at 2024-08-07T07:36:23-07:00

- [aefbea6](https://github.com/unicode-org/icu/commit/aefbea616201f69cd800744791baa3ebc4e258f1) [ICU-22722](https://unicode-org.atlassian.net/browse/ICU-22722) `Make cldr-to-icu verbiage on alt="ascii" sound more authoritative`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-06-07T11:45:29-07:00

- [81492ae](https://github.com/unicode-org/icu/commit/81492ae9a238884d47f55bf115e660d0afa4f0e0) [ICU-22722](https://unicode-org.atlassian.net/browse/ICU-22722) `Make example config for cldr-to-icu work over all locales`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-06-02T21:41:48-07:00

- [b9b324c](https://github.com/unicode-org/icu/commit/b9b324ccc5da8e16bf338d15d4acc6429aa8bad2) [ICU-22722](https://unicode-org.atlassian.net/browse/ICU-22722) `Update docs for cldr-to-icu converter`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-05-31T14:21:24-07:00

- [0ef4da9](https://github.com/unicode-org/icu/commit/0ef4da943c1cfc694e84fcb85cee5c78bae89d71) [ICU-22722](https://unicode-org.atlassian.net/browse/ICU-22722) `Fix broken link to faq in docs/userguide/icu/index.md`
	- Authored by aszasz <aszasz@users.noreply.github.com>
	- Committed at 2024-05-17T14:43:28-07:00

- [f017c37](https://github.com/unicode-org/icu/commit/f017c3722b4c04368e5a00c3850b3a81c8d5e957) [ICU-22722](https://unicode-org.atlassian.net/browse/ICU-22722) `Better name for workflow`
	- Authored by Mihai Nita <mnita@google.com>
	- Committed at 2024-05-15T14:18:34-07:00

- [3f96004](https://github.com/unicode-org/icu/commit/3f960044b87d0e343386c3311cfe025bd163483e) [ICU-22722](https://unicode-org.atlassian.net/browse/ICU-22722) `Revised ICU4J API doc process to modern tools`
	- Authored by Craig Cornelius <ccornelius@google.com>
	- Committed at 2024-04-17T13:20:26-07:00

- [dbb3fe9](https://github.com/unicode-org/icu/commit/dbb3fe957a52921aabf433d77ae87c33de328801) [ICU-22722](https://unicode-org.atlassian.net/browse/ICU-22722) `Fix missing starter character for MF2 keyword in User Guide`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-04-11T12:49:15-07:00

- [943b0ca](https://github.com/unicode-org/icu/commit/943b0ca31b38f5c7ba8d58c5f3d88d34c4ebff8d) [ICU-22722](https://unicode-org.atlassian.net/browse/ICU-22722) `Fix Readme CI badge link`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-04-05T08:31:47-07:00

#### Issue ICU-22723

_Jira issue is open_
- [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723): `ICU 76rc BRS`
	- Assigned to Markus Scherer
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): team_processes_tools

##### Commits with Issue ICU-22723

- [c92bf3d](https://github.com/unicode-org/icu/commit/c92bf3dfecc90a59cf2de55285e98c7587ce25b9) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Frontload ICU4J API promotions (BRS #18)`
	- Authored by Craig <ccornelius@google.com>
	- Committed at 2024-09-18T15:09:03-07:00

- [feca6ee](https://github.com/unicode-org/icu/commit/feca6eea68b79920fe0fde8ef47bda1b936958c1) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Frontload ICU4C change report 75 -> 76`
	- Authored by Craig <ccornelius@google.com>
	- Committed at 2024-09-18T14:56:40-07:00

- [ce4b90e](https://github.com/unicode-org/icu/commit/ce4b90e4843ebaaa7a6982f1685f235b2c44bfbe) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Integrate CLDR 46 release beta1, part 3, source files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-09-18T10:41:49-07:00

- [c7fe255](https://github.com/unicode-org/icu/commit/c7fe2558be37dd2935dfcbe8b087ca3edd1f3945) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Integrate CLDR 46 release beta1, part 2, data and test files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-09-18T10:41:49-07:00

- [6c6186e](https://github.com/unicode-org/icu/commit/6c6186efba1d507e7ee095db0f60b876f4e62f58) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Integrate CLDR 46 release beta1, part 1, binary files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-09-18T10:41:49-07:00

- [fda2223](https://github.com/unicode-org/icu/commit/fda22239525b92b49ba34ebaeb98cd1e554fd6ab) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Regenerated urename.h.`
	- Authored by Rich Gillam <richard_gillam@apple.com>
	- Committed at 2024-09-11T14:42:46-07:00

- [d0fb2d5](https://github.com/unicode-org/icu/commit/d0fb2d54b3f8d16d24a446ea6d20aa8f25ce3f14) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Promoted all @draft ICU 74 APIs to @stable ICU 74`
	- Authored by Rich Gillam <richard_gillam@apple.com>
	- Committed at 2024-09-11T14:06:45-07:00

- [937f4ad](https://github.com/unicode-org/icu/commit/937f4adba50a1e4a952862297bda10941aae2791) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Update BRS task doc for JDK TZ check`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2024-09-10T12:31:48-04:00

- [74d5e6d](https://github.com/unicode-org/icu/commit/74d5e6d2580fd0f888d2533033229490492d77fb) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Update currency numeric code mapping data.`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2024-09-09T09:25:02-04:00

- [7e05196](https://github.com/unicode-org/icu/commit/7e05196abbb34695b9280d94f3de8b5445308841) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Organize import statements.`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2024-09-09T09:22:42-04:00

- [5faea99](https://github.com/unicode-org/icu/commit/5faea996b088158d464e51706ae30811ca2ac08b) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Update double-conversion`
	- Authored by Shane F. Carr <shane@unicode.org>
	- Committed at 2024-09-03T14:00:55-07:00

- [7c66c5c](https://github.com/unicode-org/icu/commit/7c66c5cc4a69013226d22d51db3a9175e9d698cf) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `start ICU 76 download page`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-08-25T16:00:31-07:00

- [aabadf7](https://github.com/unicode-org/icu/commit/aabadf728944e290c6e47ba73c7485fefa036548) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Integrate CLDR 46 release alpha2, part 5, exclude failing unit tests for exhaust tests; spaces <-> tabs`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-08-22T08:22:56-07:00

- [18ff73e](https://github.com/unicode-org/icu/commit/18ff73e239235b0bc8907d1bf29c7b6e6b562587) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Integrate CLDR 46 cleaning`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-08-22T08:22:56-07:00

- [ebceedd](https://github.com/unicode-org/icu/commit/ebceedde217f085f733cc3f79b2aad16de3c6932) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Integrate CLDR 46 release alpha0, part 3, source files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-08-22T08:22:56-07:00

- [c231237](https://github.com/unicode-org/icu/commit/c2312370c2ad7e4b666e831c13b52c378e681209) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Integrate CLDR 46 release alpha2, part 2, data and test files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-08-22T08:22:56-07:00

- [c4daf67](https://github.com/unicode-org/icu/commit/c4daf676f333cddd1e15447efb7dfdb12f3886ab) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Integrate CLDR 46 release alpha2, part 1, binary files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-08-22T08:22:56-07:00

- [045350e](https://github.com/unicode-org/icu/commit/045350e7c1e21861d9a664a586a33ad70a7ad387) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Integrate CLDR 46 release alpha0, part 4, fixes for exausting tests`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-08-14T17:09:35-07:00

- [d041548](https://github.com/unicode-org/icu/commit/d04154833c44b55257f365072234a58eb599ef77) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Integrate CLDR 46 release alpha0, part 3, source files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-08-14T17:09:35-07:00

- [b865f26](https://github.com/unicode-org/icu/commit/b865f26876a5cb74f59b1a67311436c654b4614f) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Integrate CLDR 46 release alpha0, part 2, data files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-08-14T17:09:35-07:00

- [24966d7](https://github.com/unicode-org/icu/commit/24966d7a216e5b48d0bb5cdb11cca9ad0fb64883) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Integrate CLDR 46 release alpha0, part 1, binary files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-08-14T17:09:35-07:00

- [699fb1d](https://github.com/unicode-org/icu/commit/699fb1dbc4cfbae6f78ff0b28570f44a20a7b149) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Integrate CLDR 46 release m0, part 3, source files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-05-24T11:32:57-07:00

- [d6657ad](https://github.com/unicode-org/icu/commit/d6657adc4a244e7ba4cdecc56213d5418bf2210a) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Integrate CLDR 46 release m0, part 2, data and files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-05-24T11:32:57-07:00

- [aa5fc99](https://github.com/unicode-org/icu/commit/aa5fc99b337f3573e57bc78ec7d9ab81bcb91798) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Integrate CLDR 46 release m0, part 1, binary files`
	- Authored by DraganBesevic <dragan@unicode.org>
	- Committed at 2024-05-24T11:32:57-07:00

- [75ef0d9](https://github.com/unicode-org/icu/commit/75ef0d97e158492731604d600fbeeff8a0158ddd) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Add line number info to icuexportdata handleError`
	- Authored by Mihai Nita <mnita@google.com>
	- Committed at 2024-05-13T11:58:09-07:00

- [f133a0b](https://github.com/unicode-org/icu/commit/f133a0bd9bc6567a5ae943a5e4aaeda1cad04628) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Cleanup: remove the icu4j/maven-migration/ folder`
	- Authored by Mihai Nita <mnita@google.com>
	- Committed at 2024-05-08T14:17:44-07:00

- [617b094](https://github.com/unicode-org/icu/commit/617b094df3eb853a35f1227472178836ce625cff) [ICU-22723](https://unicode-org.atlassian.net/browse/ICU-22723) `Update PR template help text for next version's ticket numbers`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2024-04-15T22:22:46-04:00

#### Issue ICU-22724

_Jira issue is open_
- [ICU-22724](https://unicode-org.atlassian.net/browse/ICU-22724): `ICU 76 BRS`
	- Assigned to Markus Scherer
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): team_processes_tools

##### Commits with Issue ICU-22724

- [0e4c2d8](https://github.com/unicode-org/icu/commit/0e4c2d8bc68bbd46f2b74c0404e0cc26a98251f7) [ICU-22724](https://unicode-org.atlassian.net/browse/ICU-22724) `ICU BRS 76: front-load update version to 76.0.1`
	- Authored by Mihai Nita <mnita@google.com>
	- Committed at 2024-04-18T16:57:47-07:00

#### Issue ICU-22745

_Jira issue is open_
- [ICU-22745](https://unicode-org.atlassian.net/browse/ICU-22745): `Merge ICU 75 maintenance branch to main`
	- Assigned to Shane Carr
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): team_processes_tools

##### Commits with Issue ICU-22745

- [5e35ffc](https://github.com/unicode-org/icu/commit/5e35ffc87edba2c90e75bec0093ba218824d60c2) [ICU-22745](https://unicode-org.atlassian.net/browse/ICU-22745) `Merge ICU 75 maintenance branch to main (#2972)`
	- Authored by Shane F. Carr <shane@unicode.org>
	- Committed at 2024-04-18T15:04:33-07:00

#### Issue ICU-22764

_Jira issue is open_
- [ICU-22764](https://unicode-org.atlassian.net/browse/ICU-22764): `ICU gendict --toml option is memory unsafe on ICU 75`
	- Assigned to Shane Carr
	- Status: Accepted
	- Fix Version: 76.1
	- Fix Version: 75.2
	- Component(s): build_c

##### Commits with Issue ICU-22764

- [23bf38f](https://github.com/unicode-org/icu/commit/23bf38f10f146d5b637922321119926b5e60bf03) [ICU-22764](https://unicode-org.atlassian.net/browse/ICU-22764) `Fix gendict memory safety in toml uchars mode`
	- Authored by Shane F. Carr <shane@unicode.org>
	- Committed at 2024-05-03T11:02:29-07:00

#### Issue ICU-22787

_Jira issue is open_
- [ICU-22787](https://unicode-org.atlassian.net/browse/ICU-22787): `genccode generates invalid object file with ClangCL compilation on Windows`
	- Assigned to Stefan Stojanovic
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): build_c

##### Commits with Issue ICU-22787

- [66ba099](https://github.com/unicode-org/icu/commit/66ba09973a4231711b6de0de042f4e532b1873e5) [ICU-22787](https://unicode-org.atlassian.net/browse/ICU-22787) `Fix ClangCL compilation on Windows`
	- Authored by StefanStojanovic <stefan.stojanovic@janeasystems.com>
	- Committed at 2024-08-09T10:54:21+05:30

#### Issue ICU-22793

_Jira issue is open_
- [ICU-22793](https://unicode-org.atlassian.net/browse/ICU-22793): `Replace C style casts with C++ style casts`
	- Assigned to Fredrik Roubert
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): others

##### Commits with Issue ICU-22793

- [0178a07](https://github.com/unicode-org/icu/commit/0178a07a26fa7dd827a49048104b4089aa7e2b84) [ICU-22793](https://unicode-org.atlassian.net/browse/ICU-22793) `Clang-Tidy: google-readability-casting`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-07-04T22:32:12+02:00

#### Issue ICU-22794

_Jira issue is open_
- [ICU-22794](https://unicode-org.atlassian.net/browse/ICU-22794): `Deduplicate C & Java test data for MF2`
	- Assigned to Tim Chevalier
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): format_message

##### Commits with Issue ICU-22794

- [57ed0a2](https://github.com/unicode-org/icu/commit/57ed0a2a53cc1ed5ed61bec6d0cbbc139e1b4542) [ICU-22794](https://unicode-org.atlassian.net/browse/ICU-22794) `MF2: Move .json files for tests into top-level testdata/ directory`
	- Authored by Tim Chevalier <tjc@igalia.com>
	- Committed at 2024-08-08T09:14:44-07:00

#### Issue ICU-22800

_Jira issue is open_
- [ICU-22800](https://unicode-org.atlassian.net/browse/ICU-22800): `NumberFormat-related leaks, typically of DecimalFormatSymbols`
	- No assignee!
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): format_number

##### Commits with Issue ICU-22800

- [42d0bab](https://github.com/unicode-org/icu/commit/42d0bab7c3ce6716472a8642c79788ed0ffd38b9) [ICU-22800](https://unicode-org.atlassian.net/browse/ICU-22800) `Avoid inconsistent state inside Locale`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-06-21T11:49:11-07:00

#### Issue ICU-22801

_Jira issue is open_
- [ICU-22801](https://unicode-org.atlassian.net/browse/ICU-22801): `Add LeakSanitizer `
	- No assignee!
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): test_fmwk_util

##### Commits with Issue ICU-22801

- [23d9628](https://github.com/unicode-org/icu/commit/23d9628f88a2d0127c564ad98297061c36d3ce77) [ICU-22801](https://unicode-org.atlassian.net/browse/ICU-22801) `Try to add LEAKSANITIZER`
	- Authored by Frank Yung-Fong Tang <ftang@google.com>
	- Committed at 2024-07-23T09:34:04-07:00

#### Issue ICU-22814

_Jira issue is open_
- [ICU-22814](https://unicode-org.atlassian.net/browse/ICU-22814): `Add CIFuzz to ICU`
	- No assignee!
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): test_fmwk_util

##### Commits with Issue ICU-22814

- [6b00ed5](https://github.com/unicode-org/icu/commit/6b00ed56d859535ee2cbc65abb2e8215499d347b) [ICU-22814](https://unicode-org.atlassian.net/browse/ICU-22814) `Run CIFuzz on PR`
	- Authored by Frank Tang <ftang@chromium.org>
	- Committed at 2024-09-11T11:24:51-07:00

- [40b2ec3](https://github.com/unicode-org/icu/commit/40b2ec3c3727bca975824fdb9d1f084207d535ff) [ICU-22814](https://unicode-org.atlassian.net/browse/ICU-22814) `Add CIFuzz to ICU`
	- Authored by Frank Yung-Fong Tang <ftang@google.com>
	- Committed at 2024-07-19T15:53:12-07:00

#### Issue ICU-22834

_Jira issue is open_
- [ICU-22834](https://unicode-org.atlassian.net/browse/ICU-22834): `MF2 data-driven tests don't match schema`
	- Assigned to Tim Chevalier
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): format_message

##### Commits with Issue ICU-22834

- [747d5ee](https://github.com/unicode-org/icu/commit/747d5eef3b049538b926a3f45ca854da7ea62359) [ICU-22834](https://unicode-org.atlassian.net/browse/ICU-22834) `Update tests to reflect MF2 schema in conformance repo`
	- Authored by Tim Chevalier <tjc@igalia.com>
	- Committed at 2024-09-18T07:46:29-07:00

#### Issue ICU-22843

_Jira issue is open_
- [ICU-22843](https://unicode-org.atlassian.net/browse/ICU-22843): `UnicodeString <-> std::u16string_view`
	- Assigned to Markus Scherer
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): strings

##### Commits with Issue ICU-22843

- [0cb5bc6](https://github.com/unicode-org/icu/commit/0cb5bc6707dbf605c2fa2a369233048cefe0ce8b) [ICU-22843](https://unicode-org.atlassian.net/browse/ICU-22843) `Disambiguate UnicodeString::readOnlyAlias() for MSVC.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-09-12T00:36:49+02:00

- [376f10d](https://github.com/unicode-org/icu/commit/376f10db4750318e50280dcbd2102eb676d36793) [ICU-22843](https://unicode-org.atlassian.net/browse/ICU-22843) `Add a test case that's ambiguous to MSVC and fails to compile.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-09-12T00:36:49+02:00

- [7cad791](https://github.com/unicode-org/icu/commit/7cad791fb666e6759bd7aaea0461eebafbda9cfe) [ICU-22843](https://unicode-org.atlassian.net/browse/ICU-22843) `Simplify UTF-16 string literals.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-09-10T18:58:01+02:00

- [3abf474](https://github.com/unicode-org/icu/commit/3abf474f260ff871961a198d97fd785f18bd6654) [ICU-22843](https://unicode-org.atlassian.net/browse/ICU-22843) `Check libc++ version for std::basic_string_view<uint16_t>.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-09-10T18:18:15+02:00

- [6c9d39a](https://github.com/unicode-org/icu/commit/6c9d39a08c469a755fcbec1719bcd0d3af217e7f) [ICU-22843](https://unicode-org.atlassian.net/browse/ICU-22843) `Enable constructing UnicodeString from literal in fixed time.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-09-09T13:50:58+02:00

- [6645cc4](https://github.com/unicode-org/icu/commit/6645cc4935abfbdce2192428d9d4387d3228dd4a) [ICU-22843](https://unicode-org.atlassian.net/browse/ICU-22843) `UnicodeString::operator!=(string view)`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-08-29T08:45:03-07:00

- [7220649](https://github.com/unicode-org/icu/commit/72206495de9b76713107810f847d54e4c3ecd209) [ICU-22843](https://unicode-org.atlassian.net/browse/ICU-22843) `UnicodeString <-> std::u16string_view / wstring_view via templates`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2024-08-13T09:10:01-07:00

#### Issue ICU-22873

_Jira issue is open_
- [ICU-22873](https://unicode-org.atlassian.net/browse/ICU-22873): `[GHA Migration] Unable to build Linux/clang | c++20 with -Werror`
	- Assigned to Rahul Pandey
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): build_c

##### Commits with Issue ICU-22873

- [6020a98](https://github.com/unicode-org/icu/commit/6020a98fbbbfd57415c36c1c710a328e99ef675d) [ICU-22873](https://unicode-org.atlassian.net/browse/ICU-22873) `Update configure files from configure.ac using autoreconf.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-09-17T15:06:39+05:30

- [e53f1df](https://github.com/unicode-org/icu/commit/e53f1df472b3795afa5ad0f82b0a69e20c63073b) [ICU-22873](https://unicode-org.atlassian.net/browse/ICU-22873) `Make configure log versions of the compilers used.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2024-09-17T15:06:39+05:30

#### Issue ICU-22877

_Jira issue is open_
- [ICU-22877](https://unicode-org.atlassian.net/browse/ICU-22877): `Locale documentation implies only two letter region codes are valid`
	- Assigned to Chris Chapman
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): locale_id

##### Commits with Issue ICU-22877

- [46712bf](https://github.com/unicode-org/icu/commit/46712bff3dd2be6e3def01be97eb4050f054cda7) [ICU-22877](https://unicode-org.atlassian.net/browse/ICU-22877) `revised "Region code" (formerly "Country code") section`
	- Authored by Chris Chapman <cjchapman@unicode.org>
	- Committed at 2024-09-05T15:23:33-07:00

#### Issue ICU-22893

_Jira issue is open_
- [ICU-22893](https://unicode-org.atlassian.net/browse/ICU-22893): `MF2, ICU4J: Remove support for Unsupported, Private & Reserved constructs`
	- Assigned to Mihai Nita
	- Status: Accepted
	- Fix Version: 76.1
	- Component(s): format_message

##### Commits with Issue ICU-22893

- [09c5aa1](https://github.com/unicode-org/icu/commit/09c5aa1b7449fce136adf42a22ad13f0acb98aac) [ICU-22893](https://unicode-org.atlassian.net/browse/ICU-22893) `Remove support for Unsupported, Private & Reserved constructs`
	- Authored by Mihai Nita <mnita@google.com>
	- Committed at 2024-09-18T16:12:54-07:00


