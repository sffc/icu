## Collected 0 commit(s) to exclude
<!--
Copyright (C) 2021 and later: Unicode, Inc. and others.
License & terms of use: http://www.unicode.org/copyright.html
-->
Commit Report
=============

Environment:
- Now: 2023-03-21T14:48:34.471880
- Latest Commit: https://github.com/unicode-org/icu/commit/fa5a6c15191dea895837ccfb2d658d315e23e6e4
- Jira Query: `project=ICU AND fixVersion=73.1`
- Rev Range: `release-72-1..upstream/main`
- Authenticated: `Yes`

-----
-----
_(anything between the above two lines is an error)_

Total problem(s): 12

## Table Of Contents
Note: empty categories are omitted.
- _Closed Issues with No Commit_
- _Closed Issues with Illegal Resolution or Commit_
- _Commits without Jira Issue Tag_
- _Commits with Jira Issue Not Found_
- [Commits with Open Jira Issue](#commits-with-open-jira-issue) 12
- [Issue is under Review](#issue-is-under-review) 2
- _Excluded Commits_

## Problem Categories
### Commits with Open Jira Issue
[🔝Top](#table-of-contents)

_12 item(s)_
Tip: Consider closing the ticket if it is fixed.

#### Open Issues by Component

 - **build_c**: [ICU-22301](#issue-icu-22301) [ICU-22190](#issue-icu-22190)
 - **build_j**: [ICU-12811](#issue-icu-12811)
 - **data_loading_rb_svc**: [ICU-22224](#issue-icu-22224)
 - **others**: [ICU-22194](#issue-icu-22194)
 - **properties**: [ICU-22270](#issue-icu-22270)
 - **team_processes_tools**: [ICU-21755](#issue-icu-21755) [ICU-22220](#issue-icu-22220)
 - **textbounds**: [ICU-22100](#issue-icu-22100)
 - **time_calc**: [ICU-22217](#issue-icu-22217) [ICU-22226](#issue-icu-22226) [ICU-22196](#issue-icu-22196)


#### Issue ICU-12811

_Jira issue is open_
- [ICU-12811](https://unicode-org.atlassian.net/browse/ICU-12811): `Improve ICU4J build/release for maven repository`
	- Assigned to Yoshito Umaoka
	- Status: Accepted
	- Fix Version: 73.1
	- Component(s): build_j

##### Commits with Issue ICU-12811

- [b399c67](https://github.com/unicode-org/icu/commit/b399c67d5af748662275e1fa1d26d123caad3ed0) [ICU-12811](https://unicode-org.atlassian.net/browse/ICU-12811) `Fix cldrUtils (add ElapsedTime and UnicodeMap*)`
	- Authored by Mihai Nita <nmihai_2000@yahoo.com>
	- Committed at 2023-03-14T12:39:13-07:00

- [0152221](https://github.com/unicode-org/icu/commit/015222105a614dbf09e187a06cbc5d97839fe287) [ICU-12811](https://unicode-org.atlassian.net/browse/ICU-12811) `Refactor test-framework to not depend on core`
	- Authored by Mihai Nita <mnita@google.com>
	- Committed at 2023-02-21T14:16:19-08:00

- [a7f4531](https://github.com/unicode-org/icu/commit/a7f4531bfaf4e7ca93fea518b5c1734cd6ffdc1a) [ICU-12811](https://unicode-org.atlassian.net/browse/ICU-12811) `Fix localespi tests when run by Maven on Java 8`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2023-01-17T13:17:29-08:00

- [d4ac09e](https://github.com/unicode-org/icu/commit/d4ac09edbdc25feb06b3a011cbbb150b243d91f2) [ICU-12811](https://unicode-org.atlassian.net/browse/ICU-12811) `Replace local-maven-repo with data jar contents`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2023-01-17T11:09:29-08:00

- [e7530bd](https://github.com/unicode-org/icu/commit/e7530bd9ff2e7317710a1611f6d6de264143bf6a) [ICU-12811](https://unicode-org.atlassian.net/browse/ICU-12811) `Fix CI cache retain workflow's cron schedule string`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2023-01-13T14:57:51-08:00

- [2007e13](https://github.com/unicode-org/icu/commit/2007e135f1e78711247b2f0ab440dec54307cfe9) [ICU-12811](https://unicode-org.atlassian.net/browse/ICU-12811) `Add CI workflow to retain caches that are flaky/costly to init`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2023-01-13T12:36:48-08:00

- [f6353ae](https://github.com/unicode-org/icu/commit/f6353aeedcfa4b5907f1037a9d924660ff8f4d87) [ICU-12811](https://unicode-org.atlassian.net/browse/ICU-12811) `Make CI jobs for Maven run serially to avoid CI cache race condition`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2022-12-17T12:59:35-05:00

- [45e98d4](https://github.com/unicode-org/icu/commit/45e98d4f67e6d88c29d70fb8f5322d549066f76d) [ICU-12811](https://unicode-org.atlassian.net/browse/ICU-12811) `Build ICU4J using Maven`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2022-12-15T00:48:31+00:00

#### Issue ICU-21755

_Jira issue is open_
- [ICU-21755](https://unicode-org.atlassian.net/browse/ICU-21755): `Commit Checker: add "bad commits" list?`
	- Assigned to Steven R. Loomis
	- Status: Accepted
	- Fix Version: 73.1
	- Component(s): team_processes_tools

##### Commits with Issue ICU-21755

- [954d999](https://github.com/unicode-org/icu/commit/954d999126e5960cb32e80ce642870735949760f) [ICU-21755](https://unicode-org.atlassian.net/browse/ICU-21755) `commit checker: skip No Time To Do This`
	- Authored by Steven R. Loomis <srl295@gmail.com>
	- Committed at 2022-10-13T12:05:17-05:00

- [3650236](https://github.com/unicode-org/icu/commit/3650236abbc5b811bcf49e7d0d39196d06f11e3f) [ICU-21755](https://unicode-org.atlassian.net/browse/ICU-21755) `commit checker: section rewrite, summary count`
	- Authored by Steven R. Loomis <srl295@gmail.com>
	- Committed at 2022-10-13T12:05:17-05:00

- [8ca2e06](https://github.com/unicode-org/icu/commit/8ca2e06b72d8f5466c0a727433f04692c777c3a4) [ICU-21755](https://unicode-org.atlassian.net/browse/ICU-21755) `commit checker: add support for COMMIT_METADATA.md file`
	- Authored by Steven R. Loomis <srl295@gmail.com>
	- Committed at 2022-10-13T12:05:17-05:00

#### Issue ICU-22100

_Jira issue is open_
- [ICU-22100](https://unicode-org.atlassian.net/browse/ICU-22100): `Introduce BudouX into ICU for Japanese phrase breaking`
	- Assigned to AllenSu
	- Status: Accepted
	- Fix Version: 73.1
	- Component(s): textbounds

##### Commits with Issue ICU-22100

- [3f05361](https://github.com/unicode-org/icu/commit/3f05361b4192d6d337c3dacc63a91f53c966da3e) [ICU-22100](https://unicode-org.atlassian.net/browse/ICU-22100) `Modify ML model to improve Japanese phrase breaking performance`
	- Authored by allenwtsu <allenwtsu@google.com>
	- Committed at 2023-02-03T13:07:53-08:00

- [0b3b83a](https://github.com/unicode-org/icu/commit/0b3b83a80966f638fae1704a6a6042596af2a757) [ICU-22100](https://unicode-org.atlassian.net/browse/ICU-22100) `Improve Japanese phrase breaking performance`
	- Authored by allenwtsu <allenwtsu@google.com>
	- Committed at 2023-01-31T00:29:41-08:00

- [80fb309](https://github.com/unicode-org/icu/commit/80fb309c8a5f865767ef72f85ea1bf70c29e2b39) [ICU-22100](https://unicode-org.atlassian.net/browse/ICU-22100) `Remove unicode blocks from Japanese ML phrase breaking`
	- Authored by allenwtsu <allenwtsu@google.com>
	- Committed at 2023-01-09T17:38:51-08:00

- [90caafb](https://github.com/unicode-org/icu/commit/90caafbcd437e04147106d8e35a29b189977f0b7) [ICU-22100](https://unicode-org.atlassian.net/browse/ICU-22100) `Incorporate BudouX into ICU (Java)`
	- Authored by allenwtsu <allenwtsu@google.com>
	- Committed at 2022-12-20T14:27:04-08:00

- [b6b7b04](https://github.com/unicode-org/icu/commit/b6b7b045e9cef2c942efd267bb89c5a545017f0c) [ICU-22100](https://unicode-org.atlassian.net/browse/ICU-22100) `Incorporate BudouX into ICU (C++)`
	- Authored by Shuhei Iitsuka <tushuhei@google.com>
	- Committed at 2022-12-02T10:11:06-08:00

#### Issue ICU-22190

_Jira issue is open_
- [ICU-22190](https://unicode-org.atlassian.net/browse/ICU-22190): `ICU 72.1 release signed by unknown key`
	- Assigned to Craig Cornelius
	- Status: Accepted
	- Fix Version: 73.1
	- Component(s): build_c

##### Commits with Issue ICU-22190

- [fbb4a5a](https://github.com/unicode-org/icu/commit/fbb4a5a167192d2d918ee0020e8e084c299de97d) [ICU-22190](https://unicode-org.atlassian.net/browse/ICU-22190) `Update KEYS with additional signature data.`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2022-10-24T12:39:23-07:00

- [d453c12](https://github.com/unicode-org/icu/commit/d453c12bfacde783b7e985cdb4eb15c6db277f78) [ICU-22190](https://unicode-org.atlassian.net/browse/ICU-22190) `Update KEYS with additional public key`
	- Authored by Fredrik Roubert <roubert@google.com>
	- Committed at 2022-10-21T02:13:32+02:00

- [511b411](https://github.com/unicode-org/icu/commit/511b4111f2f1d97a70d08c6a885c333a8542a729) [ICU-22190](https://unicode-org.atlassian.net/browse/ICU-22190) `Add public PGP Key`
	- Authored by rp9-next <103115900+rp9-next@users.noreply.github.com>
	- Committed at 2022-10-20T23:29:13+02:00

#### Issue ICU-22194

_Jira issue is open_
- [ICU-22194](https://unicode-org.atlassian.net/browse/ICU-22194): `ICU 73 docs minor fixes`
	- Assigned to Markus Scherer
	- Status: Accepted
	- Fix Version: 73.1
	- Component(s): others

##### Commits with Issue ICU-22194

- [0650602](https://github.com/unicode-org/icu/commit/06506023c5dc61886cf97c0f7aa2a8658a479d7b) [ICU-22194](https://unicode-org.atlassian.net/browse/ICU-22194) `Add CI job to generate Github Pages using Github Actions`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2023-03-15T20:00:06-04:00

- [461bcef](https://github.com/unicode-org/icu/commit/461bcef128dabde84e796700c1634128dbd74d1b) [ICU-22194](https://unicode-org.atlassian.net/browse/ICU-22194) `Fix javadoc error (self-closing element not allowed)`
	- Authored by Mihai Nita <nmihai_2000@yahoo.com>
	- Committed at 2023-02-13T16:30:28-08:00

- [b20c970](https://github.com/unicode-org/icu/commit/b20c97009c29a6c230b834a02dea93bc7c2c1e7b) [ICU-22194](https://unicode-org.atlassian.net/browse/ICU-22194) `Add User Guide doc for MessageFormat 2.0 tech preview impl`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2023-02-10T21:17:59-05:00

- [f1e02f1](https://github.com/unicode-org/icu/commit/f1e02f149fcaffcc7cea1be21363f0cb2d59f4a9) [ICU-22194](https://unicode-org.atlassian.net/browse/ICU-22194) `Update DateTime skeleton docs with link to symbols table`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2023-02-09T11:34:53-05:00

- [fcd6e38](https://github.com/unicode-org/icu/commit/fcd6e384bd283fc960f543ef9ff92ed775406671) [ICU-22194](https://unicode-org.atlassian.net/browse/ICU-22194) `Change CharacterIterator.DONE to CharacterIterator::DONE in`
	- Authored by HanatoK <summersnow9403@gmail.com>
	- Committed at 2023-02-03T12:01:51-08:00

- [436f5a7](https://github.com/unicode-org/icu/commit/436f5a7df59c4780dedc0149c6756c16f4c803ce) [ICU-22194](https://unicode-org.atlassian.net/browse/ICU-22194) `runConfigureICU computer->compiler`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2022-10-31T16:18:18-07:00

- [e0f2d49](https://github.com/unicode-org/icu/commit/e0f2d491aa35739e699a52803a1c968fd2e96397) [ICU-22194](https://unicode-org.atlassian.net/browse/ICU-22194) `Fix typo in doc for BreakIterator rules update`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2022-10-28T14:37:49-07:00

#### Issue ICU-22196

_Jira issue is open_
- [ICU-22196](https://unicode-org.atlassian.net/browse/ICU-22196): `TZ Database 2022f updates`
	- Assigned to Yoshito Umaoka
	- Status: Accepted
	- Fix Version: 73.1
	- Component(s): time_calc

##### Commits with Issue ICU-22196

- [2d19377](https://github.com/unicode-org/icu/commit/2d19377a8d5eb459acce1911919f8a76d37d1405) [ICU-22196](https://unicode-org.atlassian.net/browse/ICU-22196) `TZ Database 2022f updates`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2022-11-01T20:21:18-04:00

#### Issue ICU-22217

_Jira issue is open_
- [ICU-22217](https://unicode-org.atlassian.net/browse/ICU-22217): `TZ Database 2022g updates`
	- Assigned to Yoshito Umaoka
	- Status: Accepted
	- Fix Version: 73.1
	- Component(s): time_calc

##### Commits with Issue ICU-22217

- [cecd19e](https://github.com/unicode-org/icu/commit/cecd19e9ba46db107b02a9de62b2ae34e199360b) [ICU-22217](https://unicode-org.atlassian.net/browse/ICU-22217) `TZ Database 2022g updates`
	- Authored by yumaoka <y.umaoka@gmail.com>
	- Committed at 2022-11-30T22:08:08-05:00

#### Issue ICU-22220

_Jira issue is open_
- [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220): `ICU 73rc BRS`
	- Assigned to Markus Scherer
	- Status: Accepted
	- Fix Version: 73.1
	- Component(s): team_processes_tools

##### Commits with Issue ICU-22220

- [e612a4f](https://github.com/unicode-org/icu/commit/e612a4f2ab3773cc120f32ebe71c62362b9c78b7) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `BRS 73rc update urename.h pass 2`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2023-03-20T13:32:31-07:00

- [a518312](https://github.com/unicode-org/icu/commit/a518312ce2b6bf9e96451b73d6e890cf07409872) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `Add usimplenumberformatter and SimpleNumberFormatter to docmain.h`
	- Authored by Craig <ccornelius@google.com>
	- Committed at 2023-03-17T21:03:29-07:00

- [21581f4](https://github.com/unicode-org/icu/commit/21581f4ec59b52338065866960dc2b155a428700) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `ICU 73 API Changes 4J & 4C`
	- Authored by Craig <ccornelius@google.com>
	- Committed at 2023-03-17T11:56:41-07:00

- [7a67099](https://github.com/unicode-org/icu/commit/7a670998b0cbb217c30fae74b69c0b001cb6071e) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `BRS73RC Update version number and regenerate configure v73.1`
	- Authored by Rahul Pandey <103115900+rp9-next@users.noreply.github.com>
	- Committed at 2023-03-17T09:36:06+05:18

- [3b03051](https://github.com/unicode-org/icu/commit/3b030512ff836522d0a294b6206dcf8b50eab725) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `Update ICU4J samples instructions`
	- Authored by Craig Cornelius <ccornelius@google.com>
	- Committed at 2023-03-16T08:39:14-07:00

- [3db74e8](https://github.com/unicode-org/icu/commit/3db74e8ae7375bb48361ea625bb0f82c465d35d3) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `CLDR release-43-beta2 to ICU main`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2023-03-15T20:52:34-07:00

- [2c20fa4](https://github.com/unicode-org/icu/commit/2c20fa45fb379a7ac5cdfb498f10294494f23d94) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `CLDR release-43-beta0 to ICU main`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2023-03-14T09:53:14-07:00

- [9e16711](https://github.com/unicode-org/icu/commit/9e16711b54d055cad10f7dc59f19d124ca6618be) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `BRS73 Updating the Unicode data files and software license`
	- Authored by Yoshito Umaoka <yumaoka@users.noreply.github.com>
	- Committed at 2023-03-06T22:31:39-05:00

- [2b71440](https://github.com/unicode-org/icu/commit/2b714406eb5f163620a76b0f298b74b00c6be458) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `Add a step to instructions and fix an obsolete path.`
	- Authored by Craig Cornelius <ccornelius@google.com>
	- Committed at 2023-03-06T19:29:02+00:00

- [3748ef8](https://github.com/unicode-org/icu/commit/3748ef8f8adca873fbd2081f0d0435020807ce46) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `adjust #ifndef U_HIDE_DRAFT_API for virtual methods, fix conditionalized enums`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2023-03-06T11:01:50-08:00

- [bca85d4](https://github.com/unicode-org/icu/commit/bca85d4641978596cbefb0269ebd7f9834345d67) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `Update ICU4J API status`
	- Authored by Craig <ccornelius@google.com>
	- Committed at 2023-03-04T02:18:24+00:00

- [5c07ee7](https://github.com/unicode-org/icu/commit/5c07ee700b0e5a122e70d948a05edc6a0f1360fe) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `ICU4C APIChangeReport for ICU73`
	- Authored by Craig Cornelius <ccornelius@google.com>
	- Committed at 2023-03-04T02:17:48+00:00

- [461ec39](https://github.com/unicode-org/icu/commit/461ec392a5b0779434d8e8e4751216af547ee08e) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `ICU4J API change report`
	- Authored by Craig <ccornelius@google.com>
	- Committed at 2023-03-03T19:47:31+00:00

- [18f6a3a](https://github.com/unicode-org/icu/commit/18f6a3a6e242dce81486382420c9e3400c231660) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `CLDR release-43-alpha2 to ICU main`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2023-02-27T11:09:02-08:00

- [d86b1ce](https://github.com/unicode-org/icu/commit/d86b1cebe192004759b6c875b0f831b97ccdae34) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `update root collation from CLDR 43`
	- Authored by Markus Scherer <markus.icu@gmail.com>
	- Committed at 2023-02-22T17:13:13-08:00

- [f924741](https://github.com/unicode-org/icu/commit/f924741bf2d7a2810a47ec44dd24e66f4979f03e) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `BRS 73rc update urename.h pass 1`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2023-02-22T10:30:25-08:00

- [d469e62](https://github.com/unicode-org/icu/commit/d469e628f391d1d464e980eb257c595fdb5a2a3a) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `CLDR release-43-alpha1 to ICU main`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2023-02-21T11:39:48-08:00

- [bd065d4](https://github.com/unicode-org/icu/commit/bd065d4704bb212dfe3414c9d1ef105fb2a4df75) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `Automate BRS tasks`
	- Authored by Elango Cheran <elango@unicode.org>
	- Committed at 2023-02-15T21:18:58-05:00

- [288c4c7](https://github.com/unicode-org/icu/commit/288c4c7555915ce7b1fb675d94ddd495058fc039) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `ICU 73 API promotions (promoting ICU 71 and earlier)`
	- Authored by Rich Gillam <richard_gillam@apple.com>
	- Committed at 2023-02-09T16:44:56-08:00

- [87fc840](https://github.com/unicode-org/icu/commit/87fc840bf7750cee0884a133e2efb976c9714f30) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `CLDR release-43-alpha0 (with SurveyTool data) to ICU main`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2023-02-06T14:46:14-08:00

- [ad82a66](https://github.com/unicode-org/icu/commit/ad82a6693acdab6adde7499853bb9bb5befc6fc3) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `integrate root exemplarCities chnages for CLDR release-43-m0 to ICU main`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2023-01-12T08:57:35-08:00

- [8d411e9](https://github.com/unicode-org/icu/commit/8d411e9b6aba9d15577341663ca2a70dd806e5a7) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `integrate CLDR release-43-m0 to ICU main for 73, update maven-build files`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2023-01-10T11:32:24-08:00

- [7e083e3](https://github.com/unicode-org/icu/commit/7e083e34fbdfc12e4d12adaa593a8da21a8ef2c5) [ICU-22220](https://unicode-org.atlassian.net/browse/ICU-22220) `BRS73RC Update version number to 73.0.1`
	- Authored by Peter Edberg <pedberg@unicode.org>
	- Committed at 2022-12-04T21:14:41-08:00

#### Issue ICU-22224

_Jira issue is open_
- [ICU-22224](https://unicode-org.atlassian.net/browse/ICU-22224): `UBSAN breakage inside pointerTOCLookupFn`
	- Assigned to Frank Yung-Fong Tang
	- Status: Accepted
	- Fix Version: 73.1
	- Component(s): data_loading_rb_svc

##### Commits with Issue ICU-22224

- [80414a2](https://github.com/unicode-org/icu/commit/80414a247b652f0e1215adef2799da689f162533) [ICU-22224](https://unicode-org.atlassian.net/browse/ICU-22224) `Enable UBSAN and fix breakage`
	- Authored by Frank Yung-Fong Tang <ftang@google.com>
	- Committed at 2023-02-27T17:31:49-08:00

#### Issue ICU-22226

_Jira issue is open_
- [ICU-22226](https://unicode-org.atlassian.net/browse/ICU-22226): `Calendar.getFirstDayOfWeek ignores the -u-fw setting in locale`
	- Assigned to Mihai Nita
	- Status: Accepted
	- Fix Version: 73.1
	- Component(s): time_calc

##### Commits with Issue ICU-22226

- [76df897](https://github.com/unicode-org/icu/commit/76df897b77fd938abc29c9121dde794300a171e6) [ICU-22226](https://unicode-org.atlassian.net/browse/ICU-22226) `Fix Calendar.getFirstDayOfWeek to honor -u-fw`
	- Authored by Mihai Nita <nmihai_2000@yahoo.com>
	- Committed at 2023-01-31T00:26:30-08:00

#### Issue ICU-22270

_Jira issue is open_
- [ICU-22270](https://unicode-org.atlassian.net/browse/ICU-22270): `Support property and property value names / aliases in icuexportdata`
	- Assigned to Manish मनीष Goregaokar
	- Status: Accepted
	- Fix Version: 73.1
	- Component(s): properties

##### Commits with Issue ICU-22270

- [be64286](https://github.com/unicode-org/icu/commit/be6428690dc9b2e0e4a622691eb4c1101647cd2d) [ICU-22270](https://unicode-org.atlassian.net/browse/ICU-22270) `expose uproperty values in icuexportdata`
	- Authored by Manish Goregaokar <manishsmail@gmail.com>
	- Committed at 2023-03-06T20:13:55-05:00

- [d3c94cc](https://github.com/unicode-org/icu/commit/d3c94cc062ef83e05b6b1dc1dd699c543efff39a) [ICU-22270](https://unicode-org.atlassian.net/browse/ICU-22270) `Use hex for mask properties`
	- Authored by Manish Goregaokar <manishsmail@gmail.com>
	- Committed at 2023-02-24T14:06:31-08:00

- [0f4e084](https://github.com/unicode-org/icu/commit/0f4e084208f8486aef6200be91e59a24848ea552) [ICU-22270](https://unicode-org.atlassian.net/browse/ICU-22270) `Add support for General_Category_Mask in icuexport`
	- Authored by Manish Goregaokar <manishsmail@gmail.com>
	- Committed at 2023-02-24T11:42:13-08:00

- [9f10855](https://github.com/unicode-org/icu/commit/9f108554af3eea7739dd07598c8e681926dc9755) [ICU-22270](https://unicode-org.atlassian.net/browse/ICU-22270) `icuexportdata: Add property and property value names/aliases`
	- Authored by Manish Goregaokar <manishsmail@gmail.com>
	- Committed at 2023-02-09T15:44:48-08:00

#### Issue ICU-22301

_Jira issue is open_
- [ICU-22301](https://unicode-org.atlassian.net/browse/ICU-22301): `BRS Automation: Running windows samples during release`
	- Assigned to Rahul Pandey
	- Status: Accepted
	- Fix Version: 73.1
	- Component(s): build_c

##### Commits with Issue ICU-22301

- [3076874](https://github.com/unicode-org/icu/commit/3076874c3231047f55c561e1dd797137e764efea) [ICU-22301](https://unicode-org.atlassian.net/browse/ICU-22301) `Add azure CI tests to be run post merge`
	- Authored by Rahul Pandey <pandeyrah@microsoft.com>
	- Committed at 2023-03-17T08:57:01-07:00


### Issue is under Review
[🔝Top](#table-of-contents)

_2 item(s)_
These issues are otherwise accounted for above, but are in review.
- [ICU-22186](https://unicode-org.atlassian.net/browse/ICU-22186): `Add unit tests for Croatia currency change from HRK to EUR`
	- _Issue is under Review_
	- Assigned to Peter Edberg
	- Reviewer: Gary L. Wade
	- Status: Reviewing
	- Fix Version: 73.1
	- Component(s): format_number
- [ICU-22283](https://unicode-org.atlassian.net/browse/ICU-22283): `type issue with setRoundingMode api`
	- _Issue is under Review_
	- Assigned to Shane Carr
	- Reviewer: Frank Yung-Fong Tang
	- Status: Reviewing
	- Fix Version: 73.1
	- Component(s): format_number

