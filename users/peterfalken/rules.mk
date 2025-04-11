# Setup QMK features
BOOTMAGIC_ENABLE = yes		# Enable QMK_Boot on plug-in
CAPS_WORD_ENABLE = yes		# Enable Caps Word
COMMAND_ENABLE = no			# Won't use for now
CONSOLE_ENABLE = no			# Won't use for now
DIP_SWITCH_ENABLE = no		# Won't use for now
DIP_SWITCH_MAP_ENABLE = no	# Won't use for now
GRAVE_ESC_ENABLE = no		# Won't use for now
MAGIC_ENABLE = no			# Won't use for now
MOUSEKEY_ENABLE = no		# Won't use for now
RAW_ENABLE = no				# Disable raw HID commands
SPACE_CADET_ENABLE = no		# Free up space

# Disable Lighting & RGB features
RGBLIGHT_ENABLE = no		# Disable RGB underglow
ifndef RGB_MATRIX_ENABLE
RGB_MATRIX_ENABLE = no		# Disable keyboard RGB matrix effects
endif

# Disable encoders by default
ifndef ENCODER_MAP_ENABLE
ENCODER_ENABLE = no     	# Disable encoder
ENCODER_MAP_ENABLE = no		# Disable encoder maps
endif

# Disable the Audio feature
MIDI_ENABLE = no
MUSIC_ENABLE = no

# Enable Link Time Optimizations
LTO_ENABLE = yes

# Include userspace files
SRC += $(USER_PATH)/peterfalken.c
