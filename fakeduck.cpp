		// FakeDuck ON
			if (MenuSettings::fakeduck) {
				write<float>(oBaseAddress + OFFSET_TIMESCALE + 0x68, 0);
			}
			// FakeDuck OFF
			else {
				write<float>(oBaseAddress + OFFSET_TIMESCALE + 0x68, 1);
			}