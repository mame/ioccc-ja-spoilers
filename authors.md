---
title: 入賞者インデックス
layout: default
---

{% capture author_entries %}{% for entry in site.pages %}{% if entry.layout == "entry" %}{% for author in entry.authors %}{{ author }};{{ entry.id }} {% endfor %}{% endif %}{% endfor %}{% endcapture %}
{% assign author_entries = author_entries | split: " " | sort %}
{% assign prev_author = nil %}
{% for author_entry_str in author_entries %}
{% assign author_entry = author_entry_str | split: ";" %}
{% assign author = author_entry[0] %}
{% assign entry = author_entry[1] %}
{% if author != prev_author %}
{% assign prev_author = author %}
{: #"{{ author }}" }
{% assign show_name = site.data.authors[author] %}
{% if show_name == nil %}
{% assign show_name = author | replace: "_", " " %}
{% endif %}
<h2 id="{{ author }}">{{ show_name }}</h2>
{% endif %}
* [[[{{ entry }}]]]({{ entry }}.html)
{% endfor %}
