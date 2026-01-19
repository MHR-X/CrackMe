#CrackMe

This is a simple reverse engineering challenge I designed to help people understand how software protection works and how to ethically bypass it.

It's not a complicated, encrypted executable. It's simple and straightforward, designed to be cracked using basic tools like x64dbg or Cheat Engine. If you can fix the right vulnerability and get a "Congratulations!" message, you've got the basics.

There are no tricks. No anti-patch system. Just clear programming logic for you to understand and repurpose.

---

### Why This Exists
I've seen too many beginners get involved in software cracking without understanding the fundamentals. So I designed this: a simple, easy-to-read, and easy-to-crack executable that teaches one good thing: **how test checks work and how to bypass them.**

Use it for practice. Test it. Learn from it. But don't use these skills on software you don't own.

---

### How to Hack It
1. Open the `CrackMe.exe` file in **x64dbg**
2. Look for the message box that says *"Premium Subscription Required"*
3. Trace the conditional jump path (`jne` / `je`)
4. Change it to an unconditional jump (`jmp`)
5. Run it — and enjoy the victory message

That's it. No key generator needed. No server emulation. Just direct binary modification.

--

### About Me
I'm **mohamedheroo** — a self-taught cybersecurity enthusiast who focuses on low-level systems, reverse engineering, and offensive research.

I build things to understand how they break.

This project is one of those experiments.

You can see more of my work on GitHub.

Don't ask for hacking software — ask for knowledge.

Stay tuned for more

— mohamedheroo
