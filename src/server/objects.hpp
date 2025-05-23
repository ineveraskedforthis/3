#pragma once

//
// This file was automatically generated from: objects.txt
// EDIT AT YOUR OWN RISK; all changes will be lost upon regeneration
// NOT SUITABLE FOR USE IN CRITICAL SOFTWARE WHERE LIVES OR LIVELIHOODS DEPEND ON THE CORRECT OPERATION
//

#include <cstdint>
#include <cstddef>
#include <utility>
#include <vector>
#include <algorithm>
#include <array>
#include <memory>
#include <assert.h>
#include <cstring>
#include "common_types.hpp"
#ifndef DCON_NO_VE
#include "ve.hpp"
#endif

#ifdef NDEBUG
#ifdef _MSC_VER
#define DCON_RELEASE_INLINE __forceinline
#else
#define DCON_RELEASE_INLINE inline __attribute__((always_inline))
#endif
#else
#define DCON_RELEASE_INLINE inline
#endif
#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable : 4324 )
#endif

namespace fif { std::string container_interface(); }

namespace dcon {
	struct load_record {
		bool user : 1;
		bool user_login : 1;
		bool user_password_hash : 1;
		bool user_is_tester : 1;
		bool user_is_admin : 1;
		bool user_session : 1;
		bool character : 1;
		bool character__index : 1;
		bool character_name : 1;
		bool location : 1;
		bool cell : 1;
		bool cell_rat_smell : 1;
		bool local_locations : 1;
		bool local_locations_cell : 1;
		bool local_locations_location : 1;
		bool character_position : 1;
		bool character_position_location : 1;
		bool character_position_character : 1;
		bool owned_character : 1;
		bool owned_character_user : 1;
		bool owned_character_character : 1;
		load_record() {
			user = false;
			user_login = false;
			user_password_hash = false;
			user_is_tester = false;
			user_is_admin = false;
			user_session = false;
			character = false;
			character__index = false;
			character_name = false;
			location = false;
			cell = false;
			cell_rat_smell = false;
			local_locations = false;
			local_locations_cell = false;
			local_locations_location = false;
			character_position = false;
			character_position_location = false;
			character_position_character = false;
			owned_character = false;
			owned_character_user = false;
			owned_character_character = false;
		}
	};
	//
	// definition of strongly typed index for user_id
	//
	class user_id {
		public:
		using value_base_t = uint16_t;
		using zero_is_null_t = std::true_type;
		
		uint16_t value = 0;
		
		constexpr user_id() noexcept = default;
		explicit constexpr user_id(uint16_t v) noexcept : value(v + 1) {}
		constexpr user_id(user_id const& v) noexcept = default;
		constexpr user_id(user_id&& v) noexcept = default;
		
		user_id& operator=(user_id const& v) noexcept = default;
		user_id& operator=(user_id&& v) noexcept = default;
		constexpr bool operator==(user_id v) const noexcept { return value == v.value; }
		constexpr bool operator!=(user_id v) const noexcept { return value != v.value; }
		explicit constexpr operator bool() const noexcept { return value != uint16_t(0); }
		constexpr DCON_RELEASE_INLINE int32_t index() const noexcept {
			return int32_t(value) - 1;
		}
	};
	
	class user_id_pair {
		public:
		user_id left;
		user_id right;
	};
	
	DCON_RELEASE_INLINE bool is_valid_index(user_id id) { return bool(id); }
	
	//
	// definition of strongly typed index for character_id
	//
	class character_id {
		public:
		using value_base_t = uint32_t;
		using zero_is_null_t = std::true_type;
		
		uint32_t value = 0;
		
		constexpr character_id() noexcept = default;
		explicit constexpr character_id(uint32_t v) noexcept : value(v + 1) {}
		constexpr character_id(character_id const& v) noexcept = default;
		constexpr character_id(character_id&& v) noexcept = default;
		
		character_id& operator=(character_id const& v) noexcept = default;
		character_id& operator=(character_id&& v) noexcept = default;
		constexpr bool operator==(character_id v) const noexcept { return value == v.value; }
		constexpr bool operator!=(character_id v) const noexcept { return value != v.value; }
		explicit constexpr operator bool() const noexcept { return value != uint32_t(0); }
		constexpr DCON_RELEASE_INLINE int32_t index() const noexcept {
			return int32_t(value) - 1;
		}
	};
	
	class character_id_pair {
		public:
		character_id left;
		character_id right;
	};
	
	DCON_RELEASE_INLINE bool is_valid_index(character_id id) { return bool(id); }
	
	//
	// definition of strongly typed index for location_id
	//
	class location_id {
		public:
		using value_base_t = uint32_t;
		using zero_is_null_t = std::true_type;
		
		uint32_t value = 0;
		
		constexpr location_id() noexcept = default;
		explicit constexpr location_id(uint32_t v) noexcept : value(v + 1) {}
		constexpr location_id(location_id const& v) noexcept = default;
		constexpr location_id(location_id&& v) noexcept = default;
		
		location_id& operator=(location_id const& v) noexcept = default;
		location_id& operator=(location_id&& v) noexcept = default;
		constexpr bool operator==(location_id v) const noexcept { return value == v.value; }
		constexpr bool operator!=(location_id v) const noexcept { return value != v.value; }
		explicit constexpr operator bool() const noexcept { return value != uint32_t(0); }
		constexpr DCON_RELEASE_INLINE int32_t index() const noexcept {
			return int32_t(value) - 1;
		}
	};
	
	class location_id_pair {
		public:
		location_id left;
		location_id right;
	};
	
	DCON_RELEASE_INLINE bool is_valid_index(location_id id) { return bool(id); }
	
	//
	// definition of strongly typed index for cell_id
	//
	class cell_id {
		public:
		using value_base_t = uint32_t;
		using zero_is_null_t = std::true_type;
		
		uint32_t value = 0;
		
		constexpr cell_id() noexcept = default;
		explicit constexpr cell_id(uint32_t v) noexcept : value(v + 1) {}
		constexpr cell_id(cell_id const& v) noexcept = default;
		constexpr cell_id(cell_id&& v) noexcept = default;
		
		cell_id& operator=(cell_id const& v) noexcept = default;
		cell_id& operator=(cell_id&& v) noexcept = default;
		constexpr bool operator==(cell_id v) const noexcept { return value == v.value; }
		constexpr bool operator!=(cell_id v) const noexcept { return value != v.value; }
		explicit constexpr operator bool() const noexcept { return value != uint32_t(0); }
		constexpr DCON_RELEASE_INLINE int32_t index() const noexcept {
			return int32_t(value) - 1;
		}
	};
	
	class cell_id_pair {
		public:
		cell_id left;
		cell_id right;
	};
	
	DCON_RELEASE_INLINE bool is_valid_index(cell_id id) { return bool(id); }
	
	//
	// definition of strongly typed index for local_locations_id
	//
	class local_locations_id {
		public:
		using value_base_t = uint32_t;
		using zero_is_null_t = std::true_type;
		
		uint32_t value = 0;
		
		constexpr local_locations_id() noexcept = default;
		explicit constexpr local_locations_id(uint32_t v) noexcept : value(v + 1) {}
		constexpr local_locations_id(local_locations_id const& v) noexcept = default;
		constexpr local_locations_id(local_locations_id&& v) noexcept = default;
		
		local_locations_id& operator=(local_locations_id const& v) noexcept = default;
		local_locations_id& operator=(local_locations_id&& v) noexcept = default;
		constexpr bool operator==(local_locations_id v) const noexcept { return value == v.value; }
		constexpr bool operator!=(local_locations_id v) const noexcept { return value != v.value; }
		explicit constexpr operator bool() const noexcept { return value != uint32_t(0); }
		constexpr DCON_RELEASE_INLINE int32_t index() const noexcept {
			return int32_t(value) - 1;
		}
	};
	
	class local_locations_id_pair {
		public:
		local_locations_id left;
		local_locations_id right;
	};
	
	DCON_RELEASE_INLINE bool is_valid_index(local_locations_id id) { return bool(id); }
	
	//
	// definition of strongly typed index for character_position_id
	//
	class character_position_id {
		public:
		using value_base_t = uint32_t;
		using zero_is_null_t = std::true_type;
		
		uint32_t value = 0;
		
		constexpr character_position_id() noexcept = default;
		explicit constexpr character_position_id(uint32_t v) noexcept : value(v + 1) {}
		constexpr character_position_id(character_position_id const& v) noexcept = default;
		constexpr character_position_id(character_position_id&& v) noexcept = default;
		
		character_position_id& operator=(character_position_id const& v) noexcept = default;
		character_position_id& operator=(character_position_id&& v) noexcept = default;
		constexpr bool operator==(character_position_id v) const noexcept { return value == v.value; }
		constexpr bool operator!=(character_position_id v) const noexcept { return value != v.value; }
		explicit constexpr operator bool() const noexcept { return value != uint32_t(0); }
		constexpr DCON_RELEASE_INLINE int32_t index() const noexcept {
			return int32_t(value) - 1;
		}
	};
	
	class character_position_id_pair {
		public:
		character_position_id left;
		character_position_id right;
	};
	
	DCON_RELEASE_INLINE bool is_valid_index(character_position_id id) { return bool(id); }
	
	//
	// definition of strongly typed index for owned_character_id
	//
	class owned_character_id {
		public:
		using value_base_t = uint16_t;
		using zero_is_null_t = std::true_type;
		
		uint16_t value = 0;
		
		constexpr owned_character_id() noexcept = default;
		explicit constexpr owned_character_id(uint16_t v) noexcept : value(v + 1) {}
		constexpr owned_character_id(owned_character_id const& v) noexcept = default;
		constexpr owned_character_id(owned_character_id&& v) noexcept = default;
		
		owned_character_id& operator=(owned_character_id const& v) noexcept = default;
		owned_character_id& operator=(owned_character_id&& v) noexcept = default;
		constexpr bool operator==(owned_character_id v) const noexcept { return value == v.value; }
		constexpr bool operator!=(owned_character_id v) const noexcept { return value != v.value; }
		explicit constexpr operator bool() const noexcept { return value != uint16_t(0); }
		constexpr DCON_RELEASE_INLINE int32_t index() const noexcept {
			return int32_t(value) - 1;
		}
	};
	
	class owned_character_id_pair {
		public:
		owned_character_id left;
		owned_character_id right;
	};
	
	DCON_RELEASE_INLINE bool is_valid_index(owned_character_id id) { return bool(id); }
	
}

#ifndef DCON_NO_VE
namespace ve {
	template<>
	struct value_to_vector_type_s<dcon::user_id> {
		using type = ::ve::tagged_vector<dcon::user_id>;
	};
	
	template<>
	struct value_to_vector_type_s<dcon::character_id> {
		using type = ::ve::tagged_vector<dcon::character_id>;
	};
	
	template<>
	struct value_to_vector_type_s<dcon::location_id> {
		using type = ::ve::tagged_vector<dcon::location_id>;
	};
	
	template<>
	struct value_to_vector_type_s<dcon::cell_id> {
		using type = ::ve::tagged_vector<dcon::cell_id>;
	};
	
	template<>
	struct value_to_vector_type_s<dcon::local_locations_id> {
		using type = ::ve::tagged_vector<dcon::local_locations_id>;
	};
	
	template<>
	struct value_to_vector_type_s<dcon::character_position_id> {
		using type = ::ve::tagged_vector<dcon::character_position_id>;
	};
	
	template<>
	struct value_to_vector_type_s<dcon::owned_character_id> {
		using type = ::ve::tagged_vector<dcon::owned_character_id>;
	};
	
}

#endif
namespace dcon {
	namespace detail {
	}

	class data_container;

	namespace internal {
		class const_object_iterator_user;
		class object_iterator_user;

		class alignas(64) user_class {
			friend const_object_iterator_user;
			friend object_iterator_user;
			friend std::string fif::container_interface();
			private:
			//
			// storage space for login of type array of uint8_t
			//
			struct dtype_login {
				std::byte* values = nullptr;
				uint32_t size = 0;
				DCON_RELEASE_INLINE auto vptr(int32_t i) const {
					return reinterpret_cast<uint8_t const*>(values  + sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63)+ (i + 1) * (sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63) + sizeof(uint8_t) * 10000 + 64 - ((10000 * sizeof(uint8_t)) & 63)));
				}
				DCON_RELEASE_INLINE auto vptr(int32_t i) {
					return reinterpret_cast<uint8_t*>(values + sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63) + (i + 1) * (sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63) + sizeof(uint8_t) * 10000 + 64 - ((10000 * sizeof(uint8_t)) & 63)));
				}
				DCON_RELEASE_INLINE void resize(uint32_t sz, uint32_t) {
					std::byte* temp = sz > 0 ? (std::byte*)(::operator new((sz + 1) * (sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63) + sizeof(uint8_t) * 10000 + 64 - ((10000 * sizeof(uint8_t)) & 63)), std::align_val_t{ 64 })) : nullptr;
					if(sz > size) {
						if(values) {
							std::memcpy(temp, values, (size + 1) * (sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63) + sizeof(uint8_t) * 10000 + 64 - ((10000 * sizeof(uint8_t)) & 63)));
							std::memset(temp + (size + 1) * (sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63) + sizeof(uint8_t) * 10000 + 64 - ((10000 * sizeof(uint8_t)) & 63)), 0, (sz - size) * (sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63) + sizeof(uint8_t) * 10000 + 64 - ((10000 * sizeof(uint8_t)) & 63)));
						} else {
							std::memset(temp, 0, (sz + 1) * (sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63) + sizeof(uint8_t) * 10000 + 64 - ((10000 * sizeof(uint8_t)) & 63)));
						}
					} else if(sz > 0) {
						std::memcpy(temp, values, (sz + 1) * (sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63) + sizeof(uint8_t) * 10000 + 64 - ((10000 * sizeof(uint8_t)) & 63)));
					}
					::operator delete(values, std::align_val_t{ 64 });
					values = temp;
					size = sz;
				}
				~dtype_login() { ::operator delete(values, std::align_val_t{ 64 }); }
				DCON_RELEASE_INLINE void copy_value(int32_t dest, int32_t source) {
					for(int32_t bi = 0; bi < int32_t(size); ++bi) {
						vptr(bi)[dest] = vptr(bi)[source];
					}
				}
				DCON_RELEASE_INLINE void zero_at(int32_t dest) {
					for(int32_t ci = 0; ci < int32_t(size); ++ci) {
						vptr(ci)[dest] = uint8_t{};
					}
				}
			}
			m_login;
			
			//
			// storage space for password_hash of type array of int32_t
			//
			struct dtype_password_hash {
				std::byte* values = nullptr;
				uint32_t size = 0;
				DCON_RELEASE_INLINE auto vptr(int32_t i) const {
					return reinterpret_cast<int32_t const*>(values  + sizeof(int32_t) + 64 - (sizeof(int32_t) & 63)+ (i + 1) * (sizeof(int32_t) + 64 - (sizeof(int32_t) & 63) + sizeof(int32_t) * 10000 + 64 - ((10000 * sizeof(int32_t)) & 63)));
				}
				DCON_RELEASE_INLINE auto vptr(int32_t i) {
					return reinterpret_cast<int32_t*>(values + sizeof(int32_t) + 64 - (sizeof(int32_t) & 63) + (i + 1) * (sizeof(int32_t) + 64 - (sizeof(int32_t) & 63) + sizeof(int32_t) * 10000 + 64 - ((10000 * sizeof(int32_t)) & 63)));
				}
				DCON_RELEASE_INLINE void resize(uint32_t sz, uint32_t) {
					std::byte* temp = sz > 0 ? (std::byte*)(::operator new((sz + 1) * (sizeof(int32_t) + 64 - (sizeof(int32_t) & 63) + sizeof(int32_t) * 10000 + 64 - ((10000 * sizeof(int32_t)) & 63)), std::align_val_t{ 64 })) : nullptr;
					if(sz > size) {
						if(values) {
							std::memcpy(temp, values, (size + 1) * (sizeof(int32_t) + 64 - (sizeof(int32_t) & 63) + sizeof(int32_t) * 10000 + 64 - ((10000 * sizeof(int32_t)) & 63)));
							std::memset(temp + (size + 1) * (sizeof(int32_t) + 64 - (sizeof(int32_t) & 63) + sizeof(int32_t) * 10000 + 64 - ((10000 * sizeof(int32_t)) & 63)), 0, (sz - size) * (sizeof(int32_t) + 64 - (sizeof(int32_t) & 63) + sizeof(int32_t) * 10000 + 64 - ((10000 * sizeof(int32_t)) & 63)));
						} else {
							std::memset(temp, 0, (sz + 1) * (sizeof(int32_t) + 64 - (sizeof(int32_t) & 63) + sizeof(int32_t) * 10000 + 64 - ((10000 * sizeof(int32_t)) & 63)));
						}
					} else if(sz > 0) {
						std::memcpy(temp, values, (sz + 1) * (sizeof(int32_t) + 64 - (sizeof(int32_t) & 63) + sizeof(int32_t) * 10000 + 64 - ((10000 * sizeof(int32_t)) & 63)));
					}
					::operator delete(values, std::align_val_t{ 64 });
					values = temp;
					size = sz;
				}
				~dtype_password_hash() { ::operator delete(values, std::align_val_t{ 64 }); }
				DCON_RELEASE_INLINE void copy_value(int32_t dest, int32_t source) {
					for(int32_t bi = 0; bi < int32_t(size); ++bi) {
						vptr(bi)[dest] = vptr(bi)[source];
					}
				}
				DCON_RELEASE_INLINE void zero_at(int32_t dest) {
					for(int32_t ci = 0; ci < int32_t(size); ++ci) {
						vptr(ci)[dest] = int32_t{};
					}
				}
			}
			m_password_hash;
			
			//
			// storage space for is_tester of type dcon::bitfield_type
			//
			struct alignas(64) dtype_is_tester {
				uint8_t padding[(63 + sizeof(dcon::bitfield_type)) & ~uint64_t(63)];
				dcon::bitfield_type values[((uint32_t(10000 + 7)) / uint32_t(8) + uint32_t(63)) & ~uint32_t(63)];
				DCON_RELEASE_INLINE auto vptr() const { return values; }
				DCON_RELEASE_INLINE auto vptr() { return values; }
				dtype_is_tester() { std::uninitialized_value_construct_n(values - 1, 1 + ((uint32_t(10000 + 7)) / uint32_t(8) + uint32_t(63)) & ~uint32_t(63)); }
			}
			m_is_tester;
			
			//
			// storage space for is_admin of type dcon::bitfield_type
			//
			struct alignas(64) dtype_is_admin {
				uint8_t padding[(63 + sizeof(dcon::bitfield_type)) & ~uint64_t(63)];
				dcon::bitfield_type values[((uint32_t(10000 + 7)) / uint32_t(8) + uint32_t(63)) & ~uint32_t(63)];
				DCON_RELEASE_INLINE auto vptr() const { return values; }
				DCON_RELEASE_INLINE auto vptr() { return values; }
				dtype_is_admin() { std::uninitialized_value_construct_n(values - 1, 1 + ((uint32_t(10000 + 7)) / uint32_t(8) + uint32_t(63)) & ~uint32_t(63)); }
			}
			m_is_admin;
			
			//
			// storage space for session of type array of int8_t
			//
			struct dtype_session {
				std::byte* values = nullptr;
				uint32_t size = 0;
				DCON_RELEASE_INLINE auto vptr(int32_t i) const {
					return reinterpret_cast<int8_t const*>(values  + sizeof(int8_t) + 64 - (sizeof(int8_t) & 63)+ (i + 1) * (sizeof(int8_t) + 64 - (sizeof(int8_t) & 63) + sizeof(int8_t) * 10000 + 64 - ((10000 * sizeof(int8_t)) & 63)));
				}
				DCON_RELEASE_INLINE auto vptr(int32_t i) {
					return reinterpret_cast<int8_t*>(values + sizeof(int8_t) + 64 - (sizeof(int8_t) & 63) + (i + 1) * (sizeof(int8_t) + 64 - (sizeof(int8_t) & 63) + sizeof(int8_t) * 10000 + 64 - ((10000 * sizeof(int8_t)) & 63)));
				}
				DCON_RELEASE_INLINE void resize(uint32_t sz, uint32_t) {
					std::byte* temp = sz > 0 ? (std::byte*)(::operator new((sz + 1) * (sizeof(int8_t) + 64 - (sizeof(int8_t) & 63) + sizeof(int8_t) * 10000 + 64 - ((10000 * sizeof(int8_t)) & 63)), std::align_val_t{ 64 })) : nullptr;
					if(sz > size) {
						if(values) {
							std::memcpy(temp, values, (size + 1) * (sizeof(int8_t) + 64 - (sizeof(int8_t) & 63) + sizeof(int8_t) * 10000 + 64 - ((10000 * sizeof(int8_t)) & 63)));
							std::memset(temp + (size + 1) * (sizeof(int8_t) + 64 - (sizeof(int8_t) & 63) + sizeof(int8_t) * 10000 + 64 - ((10000 * sizeof(int8_t)) & 63)), 0, (sz - size) * (sizeof(int8_t) + 64 - (sizeof(int8_t) & 63) + sizeof(int8_t) * 10000 + 64 - ((10000 * sizeof(int8_t)) & 63)));
						} else {
							std::memset(temp, 0, (sz + 1) * (sizeof(int8_t) + 64 - (sizeof(int8_t) & 63) + sizeof(int8_t) * 10000 + 64 - ((10000 * sizeof(int8_t)) & 63)));
						}
					} else if(sz > 0) {
						std::memcpy(temp, values, (sz + 1) * (sizeof(int8_t) + 64 - (sizeof(int8_t) & 63) + sizeof(int8_t) * 10000 + 64 - ((10000 * sizeof(int8_t)) & 63)));
					}
					::operator delete(values, std::align_val_t{ 64 });
					values = temp;
					size = sz;
				}
				~dtype_session() { ::operator delete(values, std::align_val_t{ 64 }); }
				DCON_RELEASE_INLINE void copy_value(int32_t dest, int32_t source) {
					for(int32_t bi = 0; bi < int32_t(size); ++bi) {
						vptr(bi)[dest] = vptr(bi)[source];
					}
				}
				DCON_RELEASE_INLINE void zero_at(int32_t dest) {
					for(int32_t ci = 0; ci < int32_t(size); ++ci) {
						vptr(ci)[dest] = int8_t{};
					}
				}
			}
			m_session;
			
			uint32_t size_used = 0;


			public:
			user_class() {
			}
			friend data_container;
		};

		class const_object_iterator_character;
		class object_iterator_character;

		class alignas(64) character_class {
			friend const_object_iterator_character;
			friend object_iterator_character;
			friend std::string fif::container_interface();
			private:
			//
			// storage space for _index of type character_id
			//
			struct dtype__index {
				character_id values[100000];
				DCON_RELEASE_INLINE auto vptr() const { return values; }
				DCON_RELEASE_INLINE auto vptr() { return values; }
				dtype__index() { std::uninitialized_value_construct_n(values, 100000); }
			}
			m__index;
			
			//
			// storage space for name of type array of uint8_t
			//
			struct dtype_name {
				std::byte* values = nullptr;
				uint32_t size = 0;
				DCON_RELEASE_INLINE auto vptr(int32_t i) const {
					return reinterpret_cast<uint8_t const*>(values  + sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63)+ (i + 1) * (sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63) + sizeof(uint8_t) * 100000 + 64 - ((100000 * sizeof(uint8_t)) & 63)));
				}
				DCON_RELEASE_INLINE auto vptr(int32_t i) {
					return reinterpret_cast<uint8_t*>(values + sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63) + (i + 1) * (sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63) + sizeof(uint8_t) * 100000 + 64 - ((100000 * sizeof(uint8_t)) & 63)));
				}
				DCON_RELEASE_INLINE void resize(uint32_t sz, uint32_t) {
					std::byte* temp = sz > 0 ? (std::byte*)(::operator new((sz + 1) * (sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63) + sizeof(uint8_t) * 100000 + 64 - ((100000 * sizeof(uint8_t)) & 63)), std::align_val_t{ 64 })) : nullptr;
					if(sz > size) {
						if(values) {
							std::memcpy(temp, values, (size + 1) * (sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63) + sizeof(uint8_t) * 100000 + 64 - ((100000 * sizeof(uint8_t)) & 63)));
							std::memset(temp + (size + 1) * (sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63) + sizeof(uint8_t) * 100000 + 64 - ((100000 * sizeof(uint8_t)) & 63)), 0, (sz - size) * (sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63) + sizeof(uint8_t) * 100000 + 64 - ((100000 * sizeof(uint8_t)) & 63)));
						} else {
							std::memset(temp, 0, (sz + 1) * (sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63) + sizeof(uint8_t) * 100000 + 64 - ((100000 * sizeof(uint8_t)) & 63)));
						}
					} else if(sz > 0) {
						std::memcpy(temp, values, (sz + 1) * (sizeof(uint8_t) + 64 - (sizeof(uint8_t) & 63) + sizeof(uint8_t) * 100000 + 64 - ((100000 * sizeof(uint8_t)) & 63)));
					}
					::operator delete(values, std::align_val_t{ 64 });
					values = temp;
					size = sz;
				}
				~dtype_name() { ::operator delete(values, std::align_val_t{ 64 }); }
				DCON_RELEASE_INLINE void copy_value(int32_t dest, int32_t source) {
					for(int32_t bi = 0; bi < int32_t(size); ++bi) {
						vptr(bi)[dest] = vptr(bi)[source];
					}
				}
				DCON_RELEASE_INLINE void zero_at(int32_t dest) {
					for(int32_t ci = 0; ci < int32_t(size); ++ci) {
						vptr(ci)[dest] = uint8_t{};
					}
				}
			}
			m_name;
			
			character_id first_free = character_id();
			uint32_t size_used = 0;


			public:
			character_class() {
				for(int32_t i = 100000 - 1; i >= 0; --i) {
					m__index.vptr()[i] = first_free;
					first_free = character_id(uint32_t(i));
				}
			}
			friend data_container;
		};

		class const_object_iterator_location;
		class object_iterator_location;

		class alignas(64) location_class {
			friend const_object_iterator_location;
			friend object_iterator_location;
			friend std::string fif::container_interface();
			private:
			uint32_t size_used = 0;


			public:
			location_class() {
			}
			friend data_container;
		};

		class const_object_iterator_cell;
		class object_iterator_cell;

		class alignas(64) cell_class {
			friend const_object_iterator_cell;
			friend object_iterator_cell;
			friend std::string fif::container_interface();
			private:
			//
			// storage space for rat_smell of type float
			//
			struct alignas(64) dtype_rat_smell {
				uint8_t padding[(63 + sizeof(float)) & ~uint64_t(63)];
				float values[(sizeof(float) <= 64 ? (uint32_t(1000000) + (uint32_t(64) / uint32_t(sizeof(float))) - uint32_t(1)) & ~(uint32_t(64) / uint32_t(sizeof(float)) - uint32_t(1)) : uint32_t(1000000))];
				DCON_RELEASE_INLINE auto vptr() const { return values; }
				DCON_RELEASE_INLINE auto vptr() { return values; }
				dtype_rat_smell() { std::uninitialized_value_construct_n(values - 1, 1 + (sizeof(float) <= 64 ? (uint32_t(1000000) + (uint32_t(64) / uint32_t(sizeof(float))) - uint32_t(1)) & ~(uint32_t(64) / uint32_t(sizeof(float)) - uint32_t(1)) : uint32_t(1000000))); }
			}
			m_rat_smell;
			
			uint32_t size_used = 0;


			public:
			cell_class() {
			}
			friend data_container;
		};

		class const_object_iterator_local_locations;
		class object_iterator_local_locations;
		class const_iterator_cell_foreach_local_locations_as_cell;
		class iterator_cell_foreach_local_locations_as_cell;
		struct const_iterator_cell_foreach_local_locations_as_cell_generator;
		struct iterator_cell_foreach_local_locations_as_cell_generator;

		class alignas(64) local_locations_class {
			friend const_object_iterator_local_locations;
			friend object_iterator_local_locations;
			friend std::string fif::container_interface();
			friend const_iterator_cell_foreach_local_locations_as_cell;
			friend iterator_cell_foreach_local_locations_as_cell;
			private:
			//
			// storage space for cell of type cell_id
			//
			struct alignas(64) dtype_cell {
				uint8_t padding[(63 + sizeof(cell_id)) & ~uint64_t(63)];
				cell_id values[(sizeof(cell_id) <= 64 ? (uint32_t(5000000) + (uint32_t(64) / uint32_t(sizeof(cell_id))) - uint32_t(1)) & ~(uint32_t(64) / uint32_t(sizeof(cell_id)) - uint32_t(1)) : uint32_t(5000000))];
				DCON_RELEASE_INLINE auto vptr() const { return values; }
				DCON_RELEASE_INLINE auto vptr() { return values; }
				dtype_cell() { std::uninitialized_value_construct_n(values - 1, 1 + (sizeof(cell_id) <= 64 ? (uint32_t(5000000) + (uint32_t(64) / uint32_t(sizeof(cell_id))) - uint32_t(1)) & ~(uint32_t(64) / uint32_t(sizeof(cell_id)) - uint32_t(1)) : uint32_t(5000000))); }
			}
			m_cell;
			
			//
			// storage space for array_cell of type dcon::stable_mk_2_tag
			//
			struct alignas(64) dtype_array_cell {
				uint8_t padding[(63 + sizeof(dcon::stable_mk_2_tag)) & ~uint64_t(63)];
				dcon::stable_mk_2_tag values[1000000];
				DCON_RELEASE_INLINE auto vptr() const { return values; }
				DCON_RELEASE_INLINE auto vptr() { return values; }
				dtype_array_cell() { std::uninitialized_fill_n(values - 1, 1 + 1000000, std::numeric_limits<dcon::stable_mk_2_tag>::max()); }
			}
			m_array_cell;
			
			dcon::stable_variable_vector_storage_mk_2<local_locations_id, 4, 40000000 > cell_storage;

			public:
			local_locations_class() {
			}
			friend data_container;
		};

		class const_object_iterator_character_position;
		class object_iterator_character_position;
		class const_iterator_character_foreach_character_position_as_character;
		class iterator_character_foreach_character_position_as_character;
		struct const_iterator_character_foreach_character_position_as_character_generator;
		struct iterator_character_foreach_character_position_as_character_generator;

		class alignas(64) character_position_class {
			friend const_object_iterator_character_position;
			friend object_iterator_character_position;
			friend std::string fif::container_interface();
			friend const_iterator_character_foreach_character_position_as_character;
			friend iterator_character_foreach_character_position_as_character;
			private:
			//
			// storage space for character of type character_id
			//
			struct alignas(64) dtype_character {
				uint8_t padding[(63 + sizeof(character_id)) & ~uint64_t(63)];
				character_id values[(sizeof(character_id) <= 64 ? (uint32_t(5000000) + (uint32_t(64) / uint32_t(sizeof(character_id))) - uint32_t(1)) & ~(uint32_t(64) / uint32_t(sizeof(character_id)) - uint32_t(1)) : uint32_t(5000000))];
				DCON_RELEASE_INLINE auto vptr() const { return values; }
				DCON_RELEASE_INLINE auto vptr() { return values; }
				dtype_character() { std::uninitialized_value_construct_n(values - 1, 1 + (sizeof(character_id) <= 64 ? (uint32_t(5000000) + (uint32_t(64) / uint32_t(sizeof(character_id))) - uint32_t(1)) & ~(uint32_t(64) / uint32_t(sizeof(character_id)) - uint32_t(1)) : uint32_t(5000000))); }
			}
			m_character;
			
			//
			// storage space for array_character of type dcon::stable_mk_2_tag
			//
			struct alignas(64) dtype_array_character {
				uint8_t padding[(63 + sizeof(dcon::stable_mk_2_tag)) & ~uint64_t(63)];
				dcon::stable_mk_2_tag values[100000];
				DCON_RELEASE_INLINE auto vptr() const { return values; }
				DCON_RELEASE_INLINE auto vptr() { return values; }
				dtype_array_character() { std::uninitialized_fill_n(values - 1, 1 + 100000, std::numeric_limits<dcon::stable_mk_2_tag>::max()); }
			}
			m_array_character;
			
			dcon::stable_variable_vector_storage_mk_2<character_position_id, 4, 40000000 > character_storage;

			public:
			character_position_class() {
			}
			friend data_container;
		};

		class const_object_iterator_owned_character;
		class object_iterator_owned_character;

		class alignas(64) owned_character_class {
			friend const_object_iterator_owned_character;
			friend object_iterator_owned_character;
			friend std::string fif::container_interface();
			private:
			//
			// storage space for character of type character_id
			//
			struct alignas(64) dtype_character {
				uint8_t padding[(63 + sizeof(character_id)) & ~uint64_t(63)];
				character_id values[(sizeof(character_id) <= 64 ? (uint32_t(10000) + (uint32_t(64) / uint32_t(sizeof(character_id))) - uint32_t(1)) & ~(uint32_t(64) / uint32_t(sizeof(character_id)) - uint32_t(1)) : uint32_t(10000))];
				DCON_RELEASE_INLINE auto vptr() const { return values; }
				DCON_RELEASE_INLINE auto vptr() { return values; }
				dtype_character() { std::uninitialized_value_construct_n(values - 1, 1 + (sizeof(character_id) <= 64 ? (uint32_t(10000) + (uint32_t(64) / uint32_t(sizeof(character_id))) - uint32_t(1)) & ~(uint32_t(64) / uint32_t(sizeof(character_id)) - uint32_t(1)) : uint32_t(10000))); }
			}
			m_character;
			
			//
			// storage space for link_back_character of type owned_character_id
			//
			struct alignas(64) dtype_link_back_character {
				uint8_t padding[(63 + sizeof(owned_character_id)) & ~uint64_t(63)];
				owned_character_id values[(sizeof(owned_character_id) <= 64 ? (uint32_t(100000) + (uint32_t(64) / uint32_t(sizeof(owned_character_id))) - uint32_t(1)) & ~(uint32_t(64) / uint32_t(sizeof(owned_character_id)) - uint32_t(1)) : uint32_t(100000))];
				DCON_RELEASE_INLINE auto vptr() const { return values; }
				DCON_RELEASE_INLINE auto vptr() { return values; }
				dtype_link_back_character() { std::uninitialized_value_construct_n(values - 1, 1 + (sizeof(owned_character_id) <= 64 ? (uint32_t(100000) + (uint32_t(64) / uint32_t(sizeof(owned_character_id))) - uint32_t(1)) & ~(uint32_t(64) / uint32_t(sizeof(owned_character_id)) - uint32_t(1)) : uint32_t(100000))); }
			}
			m_link_back_character;
			

			public:
			owned_character_class() {
			}
			friend data_container;
		};

	}

	class user_const_fat_id;
	class user_fat_id;
	class character_const_fat_id;
	class character_fat_id;
	class location_const_fat_id;
	class location_fat_id;
	class cell_const_fat_id;
	class cell_fat_id;
	class local_locations_const_fat_id;
	class local_locations_fat_id;
	class character_position_const_fat_id;
	class character_position_fat_id;
	class owned_character_const_fat_id;
	class owned_character_fat_id;
	class user_fat_id {
		friend data_container;
		public:
		data_container& container;
		user_id id;
		user_fat_id(data_container& c, user_id i) noexcept : container(c), id(i) {}
		user_fat_id(user_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		DCON_RELEASE_INLINE operator user_id() const noexcept { return id; }
		DCON_RELEASE_INLINE user_fat_id& operator=(user_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE user_fat_id& operator=(user_id other) noexcept {
			id = other;
			return *this;
		}
		DCON_RELEASE_INLINE bool operator==(user_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(user_id other) const noexcept {
			return id == other;
		}
		DCON_RELEASE_INLINE bool operator!=(user_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(user_id other) const noexcept {
			return id != other;
		}
		explicit operator bool() const noexcept { return bool(id); }
		DCON_RELEASE_INLINE uint8_t& get_login(uint8_t i) const noexcept;
		DCON_RELEASE_INLINE uint32_t get_login_size() const noexcept;
		DCON_RELEASE_INLINE void set_login(uint8_t i, uint8_t v) const noexcept;
		DCON_RELEASE_INLINE void resize_login(uint32_t sz) const noexcept;
		DCON_RELEASE_INLINE int32_t& get_password_hash(uint8_t i) const noexcept;
		DCON_RELEASE_INLINE uint32_t get_password_hash_size() const noexcept;
		DCON_RELEASE_INLINE void set_password_hash(uint8_t i, int32_t v) const noexcept;
		DCON_RELEASE_INLINE void resize_password_hash(uint32_t sz) const noexcept;
		DCON_RELEASE_INLINE bool get_is_tester() const noexcept;
		DCON_RELEASE_INLINE void set_is_tester(bool v) const noexcept;
		DCON_RELEASE_INLINE bool get_is_admin() const noexcept;
		DCON_RELEASE_INLINE void set_is_admin(bool v) const noexcept;
		DCON_RELEASE_INLINE int8_t& get_session(uint8_t i) const noexcept;
		DCON_RELEASE_INLINE uint32_t get_session_size() const noexcept;
		DCON_RELEASE_INLINE void set_session(uint8_t i, int8_t v) const noexcept;
		DCON_RELEASE_INLINE void resize_session(uint32_t sz) const noexcept;
		DCON_RELEASE_INLINE owned_character_fat_id get_owned_character_as_user() const noexcept;
		DCON_RELEASE_INLINE void remove_owned_character_as_user() const noexcept;
		DCON_RELEASE_INLINE owned_character_fat_id get_owned_character() const noexcept;
		DCON_RELEASE_INLINE void remove_owned_character() const noexcept;
		DCON_RELEASE_INLINE character_fat_id get_character_from_owned_character() const noexcept;
		DCON_RELEASE_INLINE void set_character_from_owned_character(character_id v) const noexcept;
		DCON_RELEASE_INLINE bool is_valid() const noexcept;
		
	};
	DCON_RELEASE_INLINE user_fat_id fatten(data_container& c, user_id id) noexcept {
		return user_fat_id(c, id);
	}
	
	class user_const_fat_id {
		friend data_container;
		public:
		data_container const& container;
		user_id id;
		user_const_fat_id(data_container const& c, user_id i) noexcept : container(c), id(i) {}
		user_const_fat_id(user_const_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		user_const_fat_id(user_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		DCON_RELEASE_INLINE operator user_id() const noexcept { return id; }
		DCON_RELEASE_INLINE user_const_fat_id& operator=(user_const_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE user_const_fat_id& operator=(user_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE user_const_fat_id& operator=(user_id other) noexcept {
			id = other;
			return *this;
		}
		DCON_RELEASE_INLINE bool operator==(user_const_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(user_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(user_id other) const noexcept {
			return id == other;
		}
		DCON_RELEASE_INLINE bool operator!=(user_const_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(user_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(user_id other) const noexcept {
			return id != other;
		}
		DCON_RELEASE_INLINE explicit operator bool() const noexcept { return bool(id); }
		DCON_RELEASE_INLINE uint8_t get_login(uint8_t i) const noexcept;
		DCON_RELEASE_INLINE uint32_t get_login_size() const noexcept;
		DCON_RELEASE_INLINE int32_t get_password_hash(uint8_t i) const noexcept;
		DCON_RELEASE_INLINE uint32_t get_password_hash_size() const noexcept;
		DCON_RELEASE_INLINE bool get_is_tester() const noexcept;
		DCON_RELEASE_INLINE bool get_is_admin() const noexcept;
		DCON_RELEASE_INLINE int8_t get_session(uint8_t i) const noexcept;
		DCON_RELEASE_INLINE uint32_t get_session_size() const noexcept;
		DCON_RELEASE_INLINE owned_character_const_fat_id get_owned_character_as_user() const noexcept;
		DCON_RELEASE_INLINE owned_character_const_fat_id get_owned_character() const noexcept;
		DCON_RELEASE_INLINE character_const_fat_id get_character_from_owned_character() const noexcept;
		DCON_RELEASE_INLINE bool is_valid() const noexcept;
		
	};
	DCON_RELEASE_INLINE bool operator==(user_fat_id const& l, user_const_fat_id const& other) noexcept {
		assert(&l.container == &other.container);
		return l.id == other.id;
	}
	DCON_RELEASE_INLINE bool operator!=(user_fat_id const& l, user_const_fat_id const& other) noexcept {
		assert(&l.container == &other.container);
		return l.id != other.id;
	}
	DCON_RELEASE_INLINE user_const_fat_id fatten(data_container const& c, user_id id) noexcept {
		return user_const_fat_id(c, id);
	}
	
	class character_fat_id {
		friend data_container;
		public:
		data_container& container;
		character_id id;
		character_fat_id(data_container& c, character_id i) noexcept : container(c), id(i) {}
		character_fat_id(character_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		DCON_RELEASE_INLINE operator character_id() const noexcept { return id; }
		DCON_RELEASE_INLINE character_fat_id& operator=(character_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE character_fat_id& operator=(character_id other) noexcept {
			id = other;
			return *this;
		}
		DCON_RELEASE_INLINE bool operator==(character_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(character_id other) const noexcept {
			return id == other;
		}
		DCON_RELEASE_INLINE bool operator!=(character_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(character_id other) const noexcept {
			return id != other;
		}
		explicit operator bool() const noexcept { return bool(id); }
		DCON_RELEASE_INLINE uint8_t& get_name(uint8_t i) const noexcept;
		DCON_RELEASE_INLINE uint32_t get_name_size() const noexcept;
		DCON_RELEASE_INLINE void set_name(uint8_t i, uint8_t v) const noexcept;
		DCON_RELEASE_INLINE void resize_name(uint32_t sz) const noexcept;
		template<typename T>
		DCON_RELEASE_INLINE void for_each_character_position_as_character(T&& func) const;
		DCON_RELEASE_INLINE std::pair<character_position_id const*, character_position_id const*> range_of_character_position_as_character() const;
		DCON_RELEASE_INLINE void remove_all_character_position_as_character() const noexcept;
		DCON_RELEASE_INLINE internal::iterator_character_foreach_character_position_as_character_generator get_character_position_as_character() const;
		template<typename T>
		DCON_RELEASE_INLINE void for_each_character_position(T&& func) const;
		DCON_RELEASE_INLINE std::pair<character_position_id const*, character_position_id const*> range_of_character_position() const;
		DCON_RELEASE_INLINE void remove_all_character_position() const noexcept;
		DCON_RELEASE_INLINE internal::iterator_character_foreach_character_position_as_character_generator get_character_position() const;
		DCON_RELEASE_INLINE owned_character_fat_id get_owned_character_as_character() const noexcept;
		DCON_RELEASE_INLINE void remove_owned_character_as_character() const noexcept;
		DCON_RELEASE_INLINE owned_character_fat_id get_owned_character() const noexcept;
		DCON_RELEASE_INLINE void remove_owned_character() const noexcept;
		DCON_RELEASE_INLINE user_fat_id get_user_from_owned_character() const noexcept;
		DCON_RELEASE_INLINE void set_user_from_owned_character(user_id v) const noexcept;
		DCON_RELEASE_INLINE bool is_valid() const noexcept;
		
	};
	DCON_RELEASE_INLINE character_fat_id fatten(data_container& c, character_id id) noexcept {
		return character_fat_id(c, id);
	}
	
	class character_const_fat_id {
		friend data_container;
		public:
		data_container const& container;
		character_id id;
		character_const_fat_id(data_container const& c, character_id i) noexcept : container(c), id(i) {}
		character_const_fat_id(character_const_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		character_const_fat_id(character_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		DCON_RELEASE_INLINE operator character_id() const noexcept { return id; }
		DCON_RELEASE_INLINE character_const_fat_id& operator=(character_const_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE character_const_fat_id& operator=(character_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE character_const_fat_id& operator=(character_id other) noexcept {
			id = other;
			return *this;
		}
		DCON_RELEASE_INLINE bool operator==(character_const_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(character_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(character_id other) const noexcept {
			return id == other;
		}
		DCON_RELEASE_INLINE bool operator!=(character_const_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(character_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(character_id other) const noexcept {
			return id != other;
		}
		DCON_RELEASE_INLINE explicit operator bool() const noexcept { return bool(id); }
		DCON_RELEASE_INLINE uint8_t get_name(uint8_t i) const noexcept;
		DCON_RELEASE_INLINE uint32_t get_name_size() const noexcept;
		template<typename T>
		DCON_RELEASE_INLINE void for_each_character_position_as_character(T&& func) const;
		DCON_RELEASE_INLINE std::pair<character_position_id const*, character_position_id const*> range_of_character_position_as_character() const;
		DCON_RELEASE_INLINE internal::const_iterator_character_foreach_character_position_as_character_generator get_character_position_as_character() const;
		template<typename T>
		DCON_RELEASE_INLINE void for_each_character_position(T&& func) const;
		DCON_RELEASE_INLINE std::pair<character_position_id const*, character_position_id const*> range_of_character_position() const;
		DCON_RELEASE_INLINE internal::const_iterator_character_foreach_character_position_as_character_generator get_character_position() const;
		DCON_RELEASE_INLINE owned_character_const_fat_id get_owned_character_as_character() const noexcept;
		DCON_RELEASE_INLINE owned_character_const_fat_id get_owned_character() const noexcept;
		DCON_RELEASE_INLINE user_const_fat_id get_user_from_owned_character() const noexcept;
		DCON_RELEASE_INLINE bool is_valid() const noexcept;
		
	};
	DCON_RELEASE_INLINE bool operator==(character_fat_id const& l, character_const_fat_id const& other) noexcept {
		assert(&l.container == &other.container);
		return l.id == other.id;
	}
	DCON_RELEASE_INLINE bool operator!=(character_fat_id const& l, character_const_fat_id const& other) noexcept {
		assert(&l.container == &other.container);
		return l.id != other.id;
	}
	DCON_RELEASE_INLINE character_const_fat_id fatten(data_container const& c, character_id id) noexcept {
		return character_const_fat_id(c, id);
	}
	
	class location_fat_id {
		friend data_container;
		public:
		data_container& container;
		location_id id;
		location_fat_id(data_container& c, location_id i) noexcept : container(c), id(i) {}
		location_fat_id(location_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		DCON_RELEASE_INLINE operator location_id() const noexcept { return id; }
		DCON_RELEASE_INLINE location_fat_id& operator=(location_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE location_fat_id& operator=(location_id other) noexcept {
			id = other;
			return *this;
		}
		DCON_RELEASE_INLINE bool operator==(location_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(location_id other) const noexcept {
			return id == other;
		}
		DCON_RELEASE_INLINE bool operator!=(location_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(location_id other) const noexcept {
			return id != other;
		}
		explicit operator bool() const noexcept { return bool(id); }
		DCON_RELEASE_INLINE local_locations_fat_id get_local_locations_as_location() const noexcept;
		DCON_RELEASE_INLINE void remove_local_locations_as_location() const noexcept;
		DCON_RELEASE_INLINE local_locations_fat_id get_local_locations() const noexcept;
		DCON_RELEASE_INLINE void remove_local_locations() const noexcept;
		DCON_RELEASE_INLINE cell_fat_id get_cell_from_local_locations() const noexcept;
		DCON_RELEASE_INLINE void set_cell_from_local_locations(cell_id v) const noexcept;
		DCON_RELEASE_INLINE character_position_fat_id get_character_position_as_location() const noexcept;
		DCON_RELEASE_INLINE void remove_character_position_as_location() const noexcept;
		DCON_RELEASE_INLINE character_position_fat_id get_character_position() const noexcept;
		DCON_RELEASE_INLINE void remove_character_position() const noexcept;
		DCON_RELEASE_INLINE character_fat_id get_character_from_character_position() const noexcept;
		DCON_RELEASE_INLINE void set_character_from_character_position(character_id v) const noexcept;
		DCON_RELEASE_INLINE bool is_valid() const noexcept;
		
	};
	DCON_RELEASE_INLINE location_fat_id fatten(data_container& c, location_id id) noexcept {
		return location_fat_id(c, id);
	}
	
	class location_const_fat_id {
		friend data_container;
		public:
		data_container const& container;
		location_id id;
		location_const_fat_id(data_container const& c, location_id i) noexcept : container(c), id(i) {}
		location_const_fat_id(location_const_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		location_const_fat_id(location_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		DCON_RELEASE_INLINE operator location_id() const noexcept { return id; }
		DCON_RELEASE_INLINE location_const_fat_id& operator=(location_const_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE location_const_fat_id& operator=(location_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE location_const_fat_id& operator=(location_id other) noexcept {
			id = other;
			return *this;
		}
		DCON_RELEASE_INLINE bool operator==(location_const_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(location_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(location_id other) const noexcept {
			return id == other;
		}
		DCON_RELEASE_INLINE bool operator!=(location_const_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(location_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(location_id other) const noexcept {
			return id != other;
		}
		DCON_RELEASE_INLINE explicit operator bool() const noexcept { return bool(id); }
		DCON_RELEASE_INLINE local_locations_const_fat_id get_local_locations_as_location() const noexcept;
		DCON_RELEASE_INLINE local_locations_const_fat_id get_local_locations() const noexcept;
		DCON_RELEASE_INLINE cell_const_fat_id get_cell_from_local_locations() const noexcept;
		DCON_RELEASE_INLINE character_position_const_fat_id get_character_position_as_location() const noexcept;
		DCON_RELEASE_INLINE character_position_const_fat_id get_character_position() const noexcept;
		DCON_RELEASE_INLINE character_const_fat_id get_character_from_character_position() const noexcept;
		DCON_RELEASE_INLINE bool is_valid() const noexcept;
		
	};
	DCON_RELEASE_INLINE bool operator==(location_fat_id const& l, location_const_fat_id const& other) noexcept {
		assert(&l.container == &other.container);
		return l.id == other.id;
	}
	DCON_RELEASE_INLINE bool operator!=(location_fat_id const& l, location_const_fat_id const& other) noexcept {
		assert(&l.container == &other.container);
		return l.id != other.id;
	}
	DCON_RELEASE_INLINE location_const_fat_id fatten(data_container const& c, location_id id) noexcept {
		return location_const_fat_id(c, id);
	}
	
	class cell_fat_id {
		friend data_container;
		public:
		data_container& container;
		cell_id id;
		cell_fat_id(data_container& c, cell_id i) noexcept : container(c), id(i) {}
		cell_fat_id(cell_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		DCON_RELEASE_INLINE operator cell_id() const noexcept { return id; }
		DCON_RELEASE_INLINE cell_fat_id& operator=(cell_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE cell_fat_id& operator=(cell_id other) noexcept {
			id = other;
			return *this;
		}
		DCON_RELEASE_INLINE bool operator==(cell_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(cell_id other) const noexcept {
			return id == other;
		}
		DCON_RELEASE_INLINE bool operator!=(cell_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(cell_id other) const noexcept {
			return id != other;
		}
		explicit operator bool() const noexcept { return bool(id); }
		DCON_RELEASE_INLINE float& get_rat_smell() const noexcept;
		DCON_RELEASE_INLINE void set_rat_smell(float v) const noexcept;
		template<typename T>
		DCON_RELEASE_INLINE void for_each_local_locations_as_cell(T&& func) const;
		DCON_RELEASE_INLINE std::pair<local_locations_id const*, local_locations_id const*> range_of_local_locations_as_cell() const;
		DCON_RELEASE_INLINE void remove_all_local_locations_as_cell() const noexcept;
		DCON_RELEASE_INLINE internal::iterator_cell_foreach_local_locations_as_cell_generator get_local_locations_as_cell() const;
		template<typename T>
		DCON_RELEASE_INLINE void for_each_local_locations(T&& func) const;
		DCON_RELEASE_INLINE std::pair<local_locations_id const*, local_locations_id const*> range_of_local_locations() const;
		DCON_RELEASE_INLINE void remove_all_local_locations() const noexcept;
		DCON_RELEASE_INLINE internal::iterator_cell_foreach_local_locations_as_cell_generator get_local_locations() const;
		DCON_RELEASE_INLINE bool is_valid() const noexcept;
		
	};
	DCON_RELEASE_INLINE cell_fat_id fatten(data_container& c, cell_id id) noexcept {
		return cell_fat_id(c, id);
	}
	
	class cell_const_fat_id {
		friend data_container;
		public:
		data_container const& container;
		cell_id id;
		cell_const_fat_id(data_container const& c, cell_id i) noexcept : container(c), id(i) {}
		cell_const_fat_id(cell_const_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		cell_const_fat_id(cell_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		DCON_RELEASE_INLINE operator cell_id() const noexcept { return id; }
		DCON_RELEASE_INLINE cell_const_fat_id& operator=(cell_const_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE cell_const_fat_id& operator=(cell_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE cell_const_fat_id& operator=(cell_id other) noexcept {
			id = other;
			return *this;
		}
		DCON_RELEASE_INLINE bool operator==(cell_const_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(cell_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(cell_id other) const noexcept {
			return id == other;
		}
		DCON_RELEASE_INLINE bool operator!=(cell_const_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(cell_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(cell_id other) const noexcept {
			return id != other;
		}
		DCON_RELEASE_INLINE explicit operator bool() const noexcept { return bool(id); }
		DCON_RELEASE_INLINE float get_rat_smell() const noexcept;
		template<typename T>
		DCON_RELEASE_INLINE void for_each_local_locations_as_cell(T&& func) const;
		DCON_RELEASE_INLINE std::pair<local_locations_id const*, local_locations_id const*> range_of_local_locations_as_cell() const;
		DCON_RELEASE_INLINE internal::const_iterator_cell_foreach_local_locations_as_cell_generator get_local_locations_as_cell() const;
		template<typename T>
		DCON_RELEASE_INLINE void for_each_local_locations(T&& func) const;
		DCON_RELEASE_INLINE std::pair<local_locations_id const*, local_locations_id const*> range_of_local_locations() const;
		DCON_RELEASE_INLINE internal::const_iterator_cell_foreach_local_locations_as_cell_generator get_local_locations() const;
		DCON_RELEASE_INLINE bool is_valid() const noexcept;
		
	};
	DCON_RELEASE_INLINE bool operator==(cell_fat_id const& l, cell_const_fat_id const& other) noexcept {
		assert(&l.container == &other.container);
		return l.id == other.id;
	}
	DCON_RELEASE_INLINE bool operator!=(cell_fat_id const& l, cell_const_fat_id const& other) noexcept {
		assert(&l.container == &other.container);
		return l.id != other.id;
	}
	DCON_RELEASE_INLINE cell_const_fat_id fatten(data_container const& c, cell_id id) noexcept {
		return cell_const_fat_id(c, id);
	}
	
	class local_locations_fat_id {
		friend data_container;
		public:
		data_container& container;
		local_locations_id id;
		local_locations_fat_id(data_container& c, local_locations_id i) noexcept : container(c), id(i) {}
		local_locations_fat_id(local_locations_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		DCON_RELEASE_INLINE operator local_locations_id() const noexcept { return id; }
		DCON_RELEASE_INLINE local_locations_fat_id& operator=(local_locations_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE local_locations_fat_id& operator=(local_locations_id other) noexcept {
			id = other;
			return *this;
		}
		DCON_RELEASE_INLINE bool operator==(local_locations_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(local_locations_id other) const noexcept {
			return id == other;
		}
		DCON_RELEASE_INLINE bool operator!=(local_locations_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(local_locations_id other) const noexcept {
			return id != other;
		}
		explicit operator bool() const noexcept { return bool(id); }
		DCON_RELEASE_INLINE cell_fat_id get_cell() const noexcept;
		DCON_RELEASE_INLINE void set_cell(cell_id val) const noexcept;
		DCON_RELEASE_INLINE bool try_set_cell(cell_id val) const noexcept;
		DCON_RELEASE_INLINE location_fat_id get_location() const noexcept;
		DCON_RELEASE_INLINE void set_location(location_id val) const noexcept;
		DCON_RELEASE_INLINE bool try_set_location(location_id val) const noexcept;
		DCON_RELEASE_INLINE bool is_valid() const noexcept;
		
	};
	DCON_RELEASE_INLINE local_locations_fat_id fatten(data_container& c, local_locations_id id) noexcept {
		return local_locations_fat_id(c, id);
	}
	
	class local_locations_const_fat_id {
		friend data_container;
		public:
		data_container const& container;
		local_locations_id id;
		local_locations_const_fat_id(data_container const& c, local_locations_id i) noexcept : container(c), id(i) {}
		local_locations_const_fat_id(local_locations_const_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		local_locations_const_fat_id(local_locations_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		DCON_RELEASE_INLINE operator local_locations_id() const noexcept { return id; }
		DCON_RELEASE_INLINE local_locations_const_fat_id& operator=(local_locations_const_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE local_locations_const_fat_id& operator=(local_locations_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE local_locations_const_fat_id& operator=(local_locations_id other) noexcept {
			id = other;
			return *this;
		}
		DCON_RELEASE_INLINE bool operator==(local_locations_const_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(local_locations_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(local_locations_id other) const noexcept {
			return id == other;
		}
		DCON_RELEASE_INLINE bool operator!=(local_locations_const_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(local_locations_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(local_locations_id other) const noexcept {
			return id != other;
		}
		DCON_RELEASE_INLINE explicit operator bool() const noexcept { return bool(id); }
		DCON_RELEASE_INLINE cell_const_fat_id get_cell() const noexcept;
		DCON_RELEASE_INLINE location_const_fat_id get_location() const noexcept;
		DCON_RELEASE_INLINE bool is_valid() const noexcept;
		
	};
	DCON_RELEASE_INLINE bool operator==(local_locations_fat_id const& l, local_locations_const_fat_id const& other) noexcept {
		assert(&l.container == &other.container);
		return l.id == other.id;
	}
	DCON_RELEASE_INLINE bool operator!=(local_locations_fat_id const& l, local_locations_const_fat_id const& other) noexcept {
		assert(&l.container == &other.container);
		return l.id != other.id;
	}
	DCON_RELEASE_INLINE local_locations_const_fat_id fatten(data_container const& c, local_locations_id id) noexcept {
		return local_locations_const_fat_id(c, id);
	}
	
	class character_position_fat_id {
		friend data_container;
		public:
		data_container& container;
		character_position_id id;
		character_position_fat_id(data_container& c, character_position_id i) noexcept : container(c), id(i) {}
		character_position_fat_id(character_position_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		DCON_RELEASE_INLINE operator character_position_id() const noexcept { return id; }
		DCON_RELEASE_INLINE character_position_fat_id& operator=(character_position_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE character_position_fat_id& operator=(character_position_id other) noexcept {
			id = other;
			return *this;
		}
		DCON_RELEASE_INLINE bool operator==(character_position_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(character_position_id other) const noexcept {
			return id == other;
		}
		DCON_RELEASE_INLINE bool operator!=(character_position_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(character_position_id other) const noexcept {
			return id != other;
		}
		explicit operator bool() const noexcept { return bool(id); }
		DCON_RELEASE_INLINE location_fat_id get_location() const noexcept;
		DCON_RELEASE_INLINE void set_location(location_id val) const noexcept;
		DCON_RELEASE_INLINE bool try_set_location(location_id val) const noexcept;
		DCON_RELEASE_INLINE character_fat_id get_character() const noexcept;
		DCON_RELEASE_INLINE void set_character(character_id val) const noexcept;
		DCON_RELEASE_INLINE bool try_set_character(character_id val) const noexcept;
		DCON_RELEASE_INLINE bool is_valid() const noexcept;
		
	};
	DCON_RELEASE_INLINE character_position_fat_id fatten(data_container& c, character_position_id id) noexcept {
		return character_position_fat_id(c, id);
	}
	
	class character_position_const_fat_id {
		friend data_container;
		public:
		data_container const& container;
		character_position_id id;
		character_position_const_fat_id(data_container const& c, character_position_id i) noexcept : container(c), id(i) {}
		character_position_const_fat_id(character_position_const_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		character_position_const_fat_id(character_position_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		DCON_RELEASE_INLINE operator character_position_id() const noexcept { return id; }
		DCON_RELEASE_INLINE character_position_const_fat_id& operator=(character_position_const_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE character_position_const_fat_id& operator=(character_position_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE character_position_const_fat_id& operator=(character_position_id other) noexcept {
			id = other;
			return *this;
		}
		DCON_RELEASE_INLINE bool operator==(character_position_const_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(character_position_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(character_position_id other) const noexcept {
			return id == other;
		}
		DCON_RELEASE_INLINE bool operator!=(character_position_const_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(character_position_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(character_position_id other) const noexcept {
			return id != other;
		}
		DCON_RELEASE_INLINE explicit operator bool() const noexcept { return bool(id); }
		DCON_RELEASE_INLINE location_const_fat_id get_location() const noexcept;
		DCON_RELEASE_INLINE character_const_fat_id get_character() const noexcept;
		DCON_RELEASE_INLINE bool is_valid() const noexcept;
		
	};
	DCON_RELEASE_INLINE bool operator==(character_position_fat_id const& l, character_position_const_fat_id const& other) noexcept {
		assert(&l.container == &other.container);
		return l.id == other.id;
	}
	DCON_RELEASE_INLINE bool operator!=(character_position_fat_id const& l, character_position_const_fat_id const& other) noexcept {
		assert(&l.container == &other.container);
		return l.id != other.id;
	}
	DCON_RELEASE_INLINE character_position_const_fat_id fatten(data_container const& c, character_position_id id) noexcept {
		return character_position_const_fat_id(c, id);
	}
	
	class owned_character_fat_id {
		friend data_container;
		public:
		data_container& container;
		owned_character_id id;
		owned_character_fat_id(data_container& c, owned_character_id i) noexcept : container(c), id(i) {}
		owned_character_fat_id(owned_character_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		DCON_RELEASE_INLINE operator owned_character_id() const noexcept { return id; }
		DCON_RELEASE_INLINE owned_character_fat_id& operator=(owned_character_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE owned_character_fat_id& operator=(owned_character_id other) noexcept {
			id = other;
			return *this;
		}
		DCON_RELEASE_INLINE bool operator==(owned_character_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(owned_character_id other) const noexcept {
			return id == other;
		}
		DCON_RELEASE_INLINE bool operator!=(owned_character_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(owned_character_id other) const noexcept {
			return id != other;
		}
		explicit operator bool() const noexcept { return bool(id); }
		DCON_RELEASE_INLINE user_fat_id get_user() const noexcept;
		DCON_RELEASE_INLINE void set_user(user_id val) const noexcept;
		DCON_RELEASE_INLINE bool try_set_user(user_id val) const noexcept;
		DCON_RELEASE_INLINE character_fat_id get_character() const noexcept;
		DCON_RELEASE_INLINE void set_character(character_id val) const noexcept;
		DCON_RELEASE_INLINE bool try_set_character(character_id val) const noexcept;
		DCON_RELEASE_INLINE bool is_valid() const noexcept;
		
	};
	DCON_RELEASE_INLINE owned_character_fat_id fatten(data_container& c, owned_character_id id) noexcept {
		return owned_character_fat_id(c, id);
	}
	
	class owned_character_const_fat_id {
		friend data_container;
		public:
		data_container const& container;
		owned_character_id id;
		owned_character_const_fat_id(data_container const& c, owned_character_id i) noexcept : container(c), id(i) {}
		owned_character_const_fat_id(owned_character_const_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		owned_character_const_fat_id(owned_character_fat_id const& o) noexcept : container(o.container), id(o.id) {}
		DCON_RELEASE_INLINE operator owned_character_id() const noexcept { return id; }
		DCON_RELEASE_INLINE owned_character_const_fat_id& operator=(owned_character_const_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE owned_character_const_fat_id& operator=(owned_character_fat_id const& other) noexcept {
			assert(&container == &other.container);
			id = other.id;
			return *this;
		}
		DCON_RELEASE_INLINE owned_character_const_fat_id& operator=(owned_character_id other) noexcept {
			id = other;
			return *this;
		}
		DCON_RELEASE_INLINE bool operator==(owned_character_const_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(owned_character_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id == other.id;
		}
		DCON_RELEASE_INLINE bool operator==(owned_character_id other) const noexcept {
			return id == other;
		}
		DCON_RELEASE_INLINE bool operator!=(owned_character_const_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(owned_character_fat_id const& other) const noexcept {
			assert(&container == &other.container);
			return id != other.id;
		}
		DCON_RELEASE_INLINE bool operator!=(owned_character_id other) const noexcept {
			return id != other;
		}
		DCON_RELEASE_INLINE explicit operator bool() const noexcept { return bool(id); }
		DCON_RELEASE_INLINE user_const_fat_id get_user() const noexcept;
		DCON_RELEASE_INLINE character_const_fat_id get_character() const noexcept;
		DCON_RELEASE_INLINE bool is_valid() const noexcept;
		
	};
	DCON_RELEASE_INLINE bool operator==(owned_character_fat_id const& l, owned_character_const_fat_id const& other) noexcept {
		assert(&l.container == &other.container);
		return l.id == other.id;
	}
	DCON_RELEASE_INLINE bool operator!=(owned_character_fat_id const& l, owned_character_const_fat_id const& other) noexcept {
		assert(&l.container == &other.container);
		return l.id != other.id;
	}
	DCON_RELEASE_INLINE owned_character_const_fat_id fatten(data_container const& c, owned_character_id id) noexcept {
		return owned_character_const_fat_id(c, id);
	}
	
	namespace internal {
		class object_iterator_user {
			private:
			data_container& container;
			uint32_t index = 0;
			public:
			object_iterator_user(data_container& c, uint32_t i) noexcept;
			DCON_RELEASE_INLINE object_iterator_user& operator++() noexcept;
			DCON_RELEASE_INLINE object_iterator_user& operator--() noexcept;
			DCON_RELEASE_INLINE bool operator==(object_iterator_user const& o) const noexcept {
				return &container == &o.container && index == o.index;
			}
			DCON_RELEASE_INLINE bool operator!=(object_iterator_user const& o) const noexcept {
				return !(*this == o);
			}
			DCON_RELEASE_INLINE user_fat_id operator*() const noexcept {
				return user_fat_id(container, user_id(user_id::value_base_t(index)));
			}
			DCON_RELEASE_INLINE object_iterator_user& operator+=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) + n);
				return *this;
			}
			DCON_RELEASE_INLINE object_iterator_user& operator-=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) - n);
				return *this;
			}
			DCON_RELEASE_INLINE object_iterator_user operator+(int32_t n) const noexcept {
				return object_iterator_user(container, uint32_t(int32_t(index) + n));
			}
			DCON_RELEASE_INLINE object_iterator_user operator-(int32_t n) const noexcept {
				return object_iterator_user(container, uint32_t(int32_t(index) - n));
			}
			DCON_RELEASE_INLINE int32_t operator-(object_iterator_user const& o) const noexcept {
				return int32_t(index) - int32_t(o.index);
			}
			DCON_RELEASE_INLINE bool operator>(object_iterator_user const& o) const noexcept {
				return index > o.index;
			}
			DCON_RELEASE_INLINE bool operator>=(object_iterator_user const& o) const noexcept {
				return index >= o.index;
			}
			DCON_RELEASE_INLINE bool operator<(object_iterator_user const& o) const noexcept {
				return index < o.index;
			}
			DCON_RELEASE_INLINE bool operator<=(object_iterator_user const& o) const noexcept {
				return index <= o.index;
			}
			DCON_RELEASE_INLINE user_fat_id operator[](int32_t n) const noexcept {
				return user_fat_id(container, user_id(user_id::value_base_t(int32_t(index) + n)));
			}
		};
		class const_object_iterator_user {
			private:
			data_container const& container;
			uint32_t index = 0;
			public:
			const_object_iterator_user(data_container const& c, uint32_t i) noexcept;
			DCON_RELEASE_INLINE const_object_iterator_user& operator++() noexcept;
			DCON_RELEASE_INLINE const_object_iterator_user& operator--() noexcept;
			DCON_RELEASE_INLINE bool operator==(const_object_iterator_user const& o) const noexcept {
				return &container == &o.container && index == o.index;
			}
			DCON_RELEASE_INLINE bool operator!=(const_object_iterator_user const& o) const noexcept {
				return !(*this == o);
			}
			DCON_RELEASE_INLINE user_const_fat_id operator*() const noexcept {
				return user_const_fat_id(container, user_id(user_id::value_base_t(index)));
			}
			DCON_RELEASE_INLINE const_object_iterator_user& operator+=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) + n);
				return *this;
			}
			DCON_RELEASE_INLINE const_object_iterator_user& operator-=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) - n);
				return *this;
			}
			DCON_RELEASE_INLINE const_object_iterator_user operator+(int32_t n) const noexcept {
				return const_object_iterator_user(container, uint32_t(int32_t(index) + n));
			}
			DCON_RELEASE_INLINE const_object_iterator_user operator-(int32_t n) const noexcept {
				return const_object_iterator_user(container, uint32_t(int32_t(index) - n));
			}
			DCON_RELEASE_INLINE int32_t operator-(const_object_iterator_user const& o) const noexcept {
				return int32_t(index) - int32_t(o.index);
			}
			DCON_RELEASE_INLINE bool operator>(const_object_iterator_user const& o) const noexcept {
				return index > o.index;
			}
			DCON_RELEASE_INLINE bool operator>=(const_object_iterator_user const& o) const noexcept {
				return index >= o.index;
			}
			DCON_RELEASE_INLINE bool operator<(const_object_iterator_user const& o) const noexcept {
				return index < o.index;
			}
			DCON_RELEASE_INLINE bool operator<=(const_object_iterator_user const& o) const noexcept {
				return index <= o.index;
			}
			DCON_RELEASE_INLINE user_const_fat_id operator[](int32_t n) const noexcept {
				return user_const_fat_id(container, user_id(user_id::value_base_t(int32_t(index) + n)));
			}
		};
		
		class object_iterator_character {
			private:
			data_container& container;
			uint32_t index = 0;
			public:
			object_iterator_character(data_container& c, uint32_t i) noexcept;
			DCON_RELEASE_INLINE object_iterator_character& operator++() noexcept;
			DCON_RELEASE_INLINE object_iterator_character& operator--() noexcept;
			DCON_RELEASE_INLINE bool operator==(object_iterator_character const& o) const noexcept {
				return &container == &o.container && index == o.index;
			}
			DCON_RELEASE_INLINE bool operator!=(object_iterator_character const& o) const noexcept {
				return !(*this == o);
			}
			DCON_RELEASE_INLINE character_fat_id operator*() const noexcept {
				return character_fat_id(container, character_id(character_id::value_base_t(index)));
			}
		};
		class const_object_iterator_character {
			private:
			data_container const& container;
			uint32_t index = 0;
			public:
			const_object_iterator_character(data_container const& c, uint32_t i) noexcept;
			DCON_RELEASE_INLINE const_object_iterator_character& operator++() noexcept;
			DCON_RELEASE_INLINE const_object_iterator_character& operator--() noexcept;
			DCON_RELEASE_INLINE bool operator==(const_object_iterator_character const& o) const noexcept {
				return &container == &o.container && index == o.index;
			}
			DCON_RELEASE_INLINE bool operator!=(const_object_iterator_character const& o) const noexcept {
				return !(*this == o);
			}
			DCON_RELEASE_INLINE character_const_fat_id operator*() const noexcept {
				return character_const_fat_id(container, character_id(character_id::value_base_t(index)));
			}
		};
		
		class iterator_character_foreach_character_position_as_character {
			private:
			data_container& container;
			character_position_id const* ptr = nullptr;
			public:
			iterator_character_foreach_character_position_as_character(data_container& c, character_id fr) noexcept;
			iterator_character_foreach_character_position_as_character(data_container& c, character_position_id const* r) noexcept : container(c), ptr(r) {}
			iterator_character_foreach_character_position_as_character(data_container& c, character_id fr, int) noexcept;
			DCON_RELEASE_INLINE iterator_character_foreach_character_position_as_character& operator++() noexcept;
			DCON_RELEASE_INLINE iterator_character_foreach_character_position_as_character& operator--() noexcept;
			DCON_RELEASE_INLINE bool operator==(iterator_character_foreach_character_position_as_character const& o) const noexcept {
				return ptr == o.ptr;
			}
			DCON_RELEASE_INLINE bool operator!=(iterator_character_foreach_character_position_as_character const& o) const noexcept {
				return !(*this == o);
			}
			DCON_RELEASE_INLINE character_position_fat_id operator*() const noexcept {
				return character_position_fat_id(container, *ptr);
			}
			DCON_RELEASE_INLINE iterator_character_foreach_character_position_as_character& operator+=(ptrdiff_t n) noexcept {
				ptr += n;
				return *this;
			}
			DCON_RELEASE_INLINE iterator_character_foreach_character_position_as_character& operator-=(ptrdiff_t n) noexcept {
				ptr -= n;
				return *this;
			}
			DCON_RELEASE_INLINE iterator_character_foreach_character_position_as_character operator+(ptrdiff_t n) const noexcept {
				return iterator_character_foreach_character_position_as_character(container, ptr + n);
			}
			DCON_RELEASE_INLINE iterator_character_foreach_character_position_as_character operator-(ptrdiff_t n) const noexcept {
				return iterator_character_foreach_character_position_as_character(container, ptr - n);
			}
			DCON_RELEASE_INLINE ptrdiff_t operator-(iterator_character_foreach_character_position_as_character const& o) const noexcept {
				return ptr - o.ptr;
			}
			DCON_RELEASE_INLINE bool operator>(iterator_character_foreach_character_position_as_character const& o) const noexcept {
				return ptr > o.ptr;
			}
			DCON_RELEASE_INLINE bool operator>=(iterator_character_foreach_character_position_as_character const& o) const noexcept {
				return ptr >= o.ptr;
			}
			DCON_RELEASE_INLINE bool operator<(iterator_character_foreach_character_position_as_character const& o) const noexcept {
				return ptr < o.ptr;
			}
			DCON_RELEASE_INLINE bool operator<=(iterator_character_foreach_character_position_as_character const& o) const noexcept {
				return ptr <= o.ptr;
			}
			DCON_RELEASE_INLINE character_position_fat_id operator[](ptrdiff_t n) const noexcept {
				return character_position_fat_id(container, *(ptr + n));
			}
		};
		class const_iterator_character_foreach_character_position_as_character {
			private:
			data_container const& container;
			character_position_id const* ptr = nullptr;
			public:
			const_iterator_character_foreach_character_position_as_character(data_container const& c, character_id fr) noexcept;
			const_iterator_character_foreach_character_position_as_character(data_container const& c, character_position_id const* r) noexcept : container(c), ptr(r) {}
			const_iterator_character_foreach_character_position_as_character(data_container const& c, character_id fr, int) noexcept;
			DCON_RELEASE_INLINE const_iterator_character_foreach_character_position_as_character& operator++() noexcept;
			DCON_RELEASE_INLINE const_iterator_character_foreach_character_position_as_character& operator--() noexcept;
			DCON_RELEASE_INLINE bool operator==(const_iterator_character_foreach_character_position_as_character const& o) const noexcept {
				return ptr == o.ptr;
			}
			DCON_RELEASE_INLINE bool operator!=(const_iterator_character_foreach_character_position_as_character const& o) const noexcept {
				return !(*this == o);
			}
			DCON_RELEASE_INLINE character_position_const_fat_id operator*() const noexcept {
				return character_position_const_fat_id(container, *ptr);
			}
			DCON_RELEASE_INLINE const_iterator_character_foreach_character_position_as_character& operator+=(ptrdiff_t n) noexcept {
				ptr += n;
				return *this;
			}
			DCON_RELEASE_INLINE const_iterator_character_foreach_character_position_as_character& operator-=(ptrdiff_t n) noexcept {
				ptr -= n;
				return *this;
			}
			DCON_RELEASE_INLINE const_iterator_character_foreach_character_position_as_character operator+(ptrdiff_t n) const noexcept {
				return const_iterator_character_foreach_character_position_as_character(container, ptr + n);
			}
			DCON_RELEASE_INLINE const_iterator_character_foreach_character_position_as_character operator-(ptrdiff_t n) const noexcept {
				return const_iterator_character_foreach_character_position_as_character(container, ptr - n);
			}
			DCON_RELEASE_INLINE ptrdiff_t operator-(const_iterator_character_foreach_character_position_as_character const& o) const noexcept {
				return ptr - o.ptr;
			}
			DCON_RELEASE_INLINE bool operator>(const_iterator_character_foreach_character_position_as_character const& o) const noexcept {
				return ptr > o.ptr;
			}
			DCON_RELEASE_INLINE bool operator>=(const_iterator_character_foreach_character_position_as_character const& o) const noexcept {
				return ptr >= o.ptr;
			}
			DCON_RELEASE_INLINE bool operator<(const_iterator_character_foreach_character_position_as_character const& o) const noexcept {
				return ptr < o.ptr;
			}
			DCON_RELEASE_INLINE bool operator<=(const_iterator_character_foreach_character_position_as_character const& o) const noexcept {
				return ptr <= o.ptr;
			}
			DCON_RELEASE_INLINE character_position_const_fat_id operator[](ptrdiff_t n) const noexcept {
				return character_position_const_fat_id(container, *(ptr + n));
			}
		};
		
		struct iterator_character_foreach_character_position_as_character_generator {
			data_container& container;
			character_id ob;
			iterator_character_foreach_character_position_as_character_generator(data_container& c, character_id o) : container(c), ob(o) {}
			DCON_RELEASE_INLINE iterator_character_foreach_character_position_as_character begin() const noexcept {
				return iterator_character_foreach_character_position_as_character(container, ob);
			}
			DCON_RELEASE_INLINE iterator_character_foreach_character_position_as_character end() const noexcept {
				return iterator_character_foreach_character_position_as_character(container, ob, 0);
			}
		};
		struct const_iterator_character_foreach_character_position_as_character_generator {
			data_container const& container;
			character_id ob;
			const_iterator_character_foreach_character_position_as_character_generator(data_container const& c, character_id o) : container(c), ob(o) {}
			DCON_RELEASE_INLINE const_iterator_character_foreach_character_position_as_character begin() const noexcept {
				return const_iterator_character_foreach_character_position_as_character(container, ob);
			}
			DCON_RELEASE_INLINE const_iterator_character_foreach_character_position_as_character end() const noexcept {
				return const_iterator_character_foreach_character_position_as_character(container, ob, 0);
			}
		};
		
		class object_iterator_location {
			private:
			data_container& container;
			uint32_t index = 0;
			public:
			object_iterator_location(data_container& c, uint32_t i) noexcept;
			DCON_RELEASE_INLINE object_iterator_location& operator++() noexcept;
			DCON_RELEASE_INLINE object_iterator_location& operator--() noexcept;
			DCON_RELEASE_INLINE bool operator==(object_iterator_location const& o) const noexcept {
				return &container == &o.container && index == o.index;
			}
			DCON_RELEASE_INLINE bool operator!=(object_iterator_location const& o) const noexcept {
				return !(*this == o);
			}
			DCON_RELEASE_INLINE location_fat_id operator*() const noexcept {
				return location_fat_id(container, location_id(location_id::value_base_t(index)));
			}
			DCON_RELEASE_INLINE object_iterator_location& operator+=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) + n);
				return *this;
			}
			DCON_RELEASE_INLINE object_iterator_location& operator-=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) - n);
				return *this;
			}
			DCON_RELEASE_INLINE object_iterator_location operator+(int32_t n) const noexcept {
				return object_iterator_location(container, uint32_t(int32_t(index) + n));
			}
			DCON_RELEASE_INLINE object_iterator_location operator-(int32_t n) const noexcept {
				return object_iterator_location(container, uint32_t(int32_t(index) - n));
			}
			DCON_RELEASE_INLINE int32_t operator-(object_iterator_location const& o) const noexcept {
				return int32_t(index) - int32_t(o.index);
			}
			DCON_RELEASE_INLINE bool operator>(object_iterator_location const& o) const noexcept {
				return index > o.index;
			}
			DCON_RELEASE_INLINE bool operator>=(object_iterator_location const& o) const noexcept {
				return index >= o.index;
			}
			DCON_RELEASE_INLINE bool operator<(object_iterator_location const& o) const noexcept {
				return index < o.index;
			}
			DCON_RELEASE_INLINE bool operator<=(object_iterator_location const& o) const noexcept {
				return index <= o.index;
			}
			DCON_RELEASE_INLINE location_fat_id operator[](int32_t n) const noexcept {
				return location_fat_id(container, location_id(location_id::value_base_t(int32_t(index) + n)));
			}
		};
		class const_object_iterator_location {
			private:
			data_container const& container;
			uint32_t index = 0;
			public:
			const_object_iterator_location(data_container const& c, uint32_t i) noexcept;
			DCON_RELEASE_INLINE const_object_iterator_location& operator++() noexcept;
			DCON_RELEASE_INLINE const_object_iterator_location& operator--() noexcept;
			DCON_RELEASE_INLINE bool operator==(const_object_iterator_location const& o) const noexcept {
				return &container == &o.container && index == o.index;
			}
			DCON_RELEASE_INLINE bool operator!=(const_object_iterator_location const& o) const noexcept {
				return !(*this == o);
			}
			DCON_RELEASE_INLINE location_const_fat_id operator*() const noexcept {
				return location_const_fat_id(container, location_id(location_id::value_base_t(index)));
			}
			DCON_RELEASE_INLINE const_object_iterator_location& operator+=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) + n);
				return *this;
			}
			DCON_RELEASE_INLINE const_object_iterator_location& operator-=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) - n);
				return *this;
			}
			DCON_RELEASE_INLINE const_object_iterator_location operator+(int32_t n) const noexcept {
				return const_object_iterator_location(container, uint32_t(int32_t(index) + n));
			}
			DCON_RELEASE_INLINE const_object_iterator_location operator-(int32_t n) const noexcept {
				return const_object_iterator_location(container, uint32_t(int32_t(index) - n));
			}
			DCON_RELEASE_INLINE int32_t operator-(const_object_iterator_location const& o) const noexcept {
				return int32_t(index) - int32_t(o.index);
			}
			DCON_RELEASE_INLINE bool operator>(const_object_iterator_location const& o) const noexcept {
				return index > o.index;
			}
			DCON_RELEASE_INLINE bool operator>=(const_object_iterator_location const& o) const noexcept {
				return index >= o.index;
			}
			DCON_RELEASE_INLINE bool operator<(const_object_iterator_location const& o) const noexcept {
				return index < o.index;
			}
			DCON_RELEASE_INLINE bool operator<=(const_object_iterator_location const& o) const noexcept {
				return index <= o.index;
			}
			DCON_RELEASE_INLINE location_const_fat_id operator[](int32_t n) const noexcept {
				return location_const_fat_id(container, location_id(location_id::value_base_t(int32_t(index) + n)));
			}
		};
		
		class object_iterator_cell {
			private:
			data_container& container;
			uint32_t index = 0;
			public:
			object_iterator_cell(data_container& c, uint32_t i) noexcept;
			DCON_RELEASE_INLINE object_iterator_cell& operator++() noexcept;
			DCON_RELEASE_INLINE object_iterator_cell& operator--() noexcept;
			DCON_RELEASE_INLINE bool operator==(object_iterator_cell const& o) const noexcept {
				return &container == &o.container && index == o.index;
			}
			DCON_RELEASE_INLINE bool operator!=(object_iterator_cell const& o) const noexcept {
				return !(*this == o);
			}
			DCON_RELEASE_INLINE cell_fat_id operator*() const noexcept {
				return cell_fat_id(container, cell_id(cell_id::value_base_t(index)));
			}
			DCON_RELEASE_INLINE object_iterator_cell& operator+=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) + n);
				return *this;
			}
			DCON_RELEASE_INLINE object_iterator_cell& operator-=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) - n);
				return *this;
			}
			DCON_RELEASE_INLINE object_iterator_cell operator+(int32_t n) const noexcept {
				return object_iterator_cell(container, uint32_t(int32_t(index) + n));
			}
			DCON_RELEASE_INLINE object_iterator_cell operator-(int32_t n) const noexcept {
				return object_iterator_cell(container, uint32_t(int32_t(index) - n));
			}
			DCON_RELEASE_INLINE int32_t operator-(object_iterator_cell const& o) const noexcept {
				return int32_t(index) - int32_t(o.index);
			}
			DCON_RELEASE_INLINE bool operator>(object_iterator_cell const& o) const noexcept {
				return index > o.index;
			}
			DCON_RELEASE_INLINE bool operator>=(object_iterator_cell const& o) const noexcept {
				return index >= o.index;
			}
			DCON_RELEASE_INLINE bool operator<(object_iterator_cell const& o) const noexcept {
				return index < o.index;
			}
			DCON_RELEASE_INLINE bool operator<=(object_iterator_cell const& o) const noexcept {
				return index <= o.index;
			}
			DCON_RELEASE_INLINE cell_fat_id operator[](int32_t n) const noexcept {
				return cell_fat_id(container, cell_id(cell_id::value_base_t(int32_t(index) + n)));
			}
		};
		class const_object_iterator_cell {
			private:
			data_container const& container;
			uint32_t index = 0;
			public:
			const_object_iterator_cell(data_container const& c, uint32_t i) noexcept;
			DCON_RELEASE_INLINE const_object_iterator_cell& operator++() noexcept;
			DCON_RELEASE_INLINE const_object_iterator_cell& operator--() noexcept;
			DCON_RELEASE_INLINE bool operator==(const_object_iterator_cell const& o) const noexcept {
				return &container == &o.container && index == o.index;
			}
			DCON_RELEASE_INLINE bool operator!=(const_object_iterator_cell const& o) const noexcept {
				return !(*this == o);
			}
			DCON_RELEASE_INLINE cell_const_fat_id operator*() const noexcept {
				return cell_const_fat_id(container, cell_id(cell_id::value_base_t(index)));
			}
			DCON_RELEASE_INLINE const_object_iterator_cell& operator+=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) + n);
				return *this;
			}
			DCON_RELEASE_INLINE const_object_iterator_cell& operator-=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) - n);
				return *this;
			}
			DCON_RELEASE_INLINE const_object_iterator_cell operator+(int32_t n) const noexcept {
				return const_object_iterator_cell(container, uint32_t(int32_t(index) + n));
			}
			DCON_RELEASE_INLINE const_object_iterator_cell operator-(int32_t n) const noexcept {
				return const_object_iterator_cell(container, uint32_t(int32_t(index) - n));
			}
			DCON_RELEASE_INLINE int32_t operator-(const_object_iterator_cell const& o) const noexcept {
				return int32_t(index) - int32_t(o.index);
			}
			DCON_RELEASE_INLINE bool operator>(const_object_iterator_cell const& o) const noexcept {
				return index > o.index;
			}
			DCON_RELEASE_INLINE bool operator>=(const_object_iterator_cell const& o) const noexcept {
				return index >= o.index;
			}
			DCON_RELEASE_INLINE bool operator<(const_object_iterator_cell const& o) const noexcept {
				return index < o.index;
			}
			DCON_RELEASE_INLINE bool operator<=(const_object_iterator_cell const& o) const noexcept {
				return index <= o.index;
			}
			DCON_RELEASE_INLINE cell_const_fat_id operator[](int32_t n) const noexcept {
				return cell_const_fat_id(container, cell_id(cell_id::value_base_t(int32_t(index) + n)));
			}
		};
		
		class iterator_cell_foreach_local_locations_as_cell {
			private:
			data_container& container;
			local_locations_id const* ptr = nullptr;
			public:
			iterator_cell_foreach_local_locations_as_cell(data_container& c, cell_id fr) noexcept;
			iterator_cell_foreach_local_locations_as_cell(data_container& c, local_locations_id const* r) noexcept : container(c), ptr(r) {}
			iterator_cell_foreach_local_locations_as_cell(data_container& c, cell_id fr, int) noexcept;
			DCON_RELEASE_INLINE iterator_cell_foreach_local_locations_as_cell& operator++() noexcept;
			DCON_RELEASE_INLINE iterator_cell_foreach_local_locations_as_cell& operator--() noexcept;
			DCON_RELEASE_INLINE bool operator==(iterator_cell_foreach_local_locations_as_cell const& o) const noexcept {
				return ptr == o.ptr;
			}
			DCON_RELEASE_INLINE bool operator!=(iterator_cell_foreach_local_locations_as_cell const& o) const noexcept {
				return !(*this == o);
			}
			DCON_RELEASE_INLINE local_locations_fat_id operator*() const noexcept {
				return local_locations_fat_id(container, *ptr);
			}
			DCON_RELEASE_INLINE iterator_cell_foreach_local_locations_as_cell& operator+=(ptrdiff_t n) noexcept {
				ptr += n;
				return *this;
			}
			DCON_RELEASE_INLINE iterator_cell_foreach_local_locations_as_cell& operator-=(ptrdiff_t n) noexcept {
				ptr -= n;
				return *this;
			}
			DCON_RELEASE_INLINE iterator_cell_foreach_local_locations_as_cell operator+(ptrdiff_t n) const noexcept {
				return iterator_cell_foreach_local_locations_as_cell(container, ptr + n);
			}
			DCON_RELEASE_INLINE iterator_cell_foreach_local_locations_as_cell operator-(ptrdiff_t n) const noexcept {
				return iterator_cell_foreach_local_locations_as_cell(container, ptr - n);
			}
			DCON_RELEASE_INLINE ptrdiff_t operator-(iterator_cell_foreach_local_locations_as_cell const& o) const noexcept {
				return ptr - o.ptr;
			}
			DCON_RELEASE_INLINE bool operator>(iterator_cell_foreach_local_locations_as_cell const& o) const noexcept {
				return ptr > o.ptr;
			}
			DCON_RELEASE_INLINE bool operator>=(iterator_cell_foreach_local_locations_as_cell const& o) const noexcept {
				return ptr >= o.ptr;
			}
			DCON_RELEASE_INLINE bool operator<(iterator_cell_foreach_local_locations_as_cell const& o) const noexcept {
				return ptr < o.ptr;
			}
			DCON_RELEASE_INLINE bool operator<=(iterator_cell_foreach_local_locations_as_cell const& o) const noexcept {
				return ptr <= o.ptr;
			}
			DCON_RELEASE_INLINE local_locations_fat_id operator[](ptrdiff_t n) const noexcept {
				return local_locations_fat_id(container, *(ptr + n));
			}
		};
		class const_iterator_cell_foreach_local_locations_as_cell {
			private:
			data_container const& container;
			local_locations_id const* ptr = nullptr;
			public:
			const_iterator_cell_foreach_local_locations_as_cell(data_container const& c, cell_id fr) noexcept;
			const_iterator_cell_foreach_local_locations_as_cell(data_container const& c, local_locations_id const* r) noexcept : container(c), ptr(r) {}
			const_iterator_cell_foreach_local_locations_as_cell(data_container const& c, cell_id fr, int) noexcept;
			DCON_RELEASE_INLINE const_iterator_cell_foreach_local_locations_as_cell& operator++() noexcept;
			DCON_RELEASE_INLINE const_iterator_cell_foreach_local_locations_as_cell& operator--() noexcept;
			DCON_RELEASE_INLINE bool operator==(const_iterator_cell_foreach_local_locations_as_cell const& o) const noexcept {
				return ptr == o.ptr;
			}
			DCON_RELEASE_INLINE bool operator!=(const_iterator_cell_foreach_local_locations_as_cell const& o) const noexcept {
				return !(*this == o);
			}
			DCON_RELEASE_INLINE local_locations_const_fat_id operator*() const noexcept {
				return local_locations_const_fat_id(container, *ptr);
			}
			DCON_RELEASE_INLINE const_iterator_cell_foreach_local_locations_as_cell& operator+=(ptrdiff_t n) noexcept {
				ptr += n;
				return *this;
			}
			DCON_RELEASE_INLINE const_iterator_cell_foreach_local_locations_as_cell& operator-=(ptrdiff_t n) noexcept {
				ptr -= n;
				return *this;
			}
			DCON_RELEASE_INLINE const_iterator_cell_foreach_local_locations_as_cell operator+(ptrdiff_t n) const noexcept {
				return const_iterator_cell_foreach_local_locations_as_cell(container, ptr + n);
			}
			DCON_RELEASE_INLINE const_iterator_cell_foreach_local_locations_as_cell operator-(ptrdiff_t n) const noexcept {
				return const_iterator_cell_foreach_local_locations_as_cell(container, ptr - n);
			}
			DCON_RELEASE_INLINE ptrdiff_t operator-(const_iterator_cell_foreach_local_locations_as_cell const& o) const noexcept {
				return ptr - o.ptr;
			}
			DCON_RELEASE_INLINE bool operator>(const_iterator_cell_foreach_local_locations_as_cell const& o) const noexcept {
				return ptr > o.ptr;
			}
			DCON_RELEASE_INLINE bool operator>=(const_iterator_cell_foreach_local_locations_as_cell const& o) const noexcept {
				return ptr >= o.ptr;
			}
			DCON_RELEASE_INLINE bool operator<(const_iterator_cell_foreach_local_locations_as_cell const& o) const noexcept {
				return ptr < o.ptr;
			}
			DCON_RELEASE_INLINE bool operator<=(const_iterator_cell_foreach_local_locations_as_cell const& o) const noexcept {
				return ptr <= o.ptr;
			}
			DCON_RELEASE_INLINE local_locations_const_fat_id operator[](ptrdiff_t n) const noexcept {
				return local_locations_const_fat_id(container, *(ptr + n));
			}
		};
		
		struct iterator_cell_foreach_local_locations_as_cell_generator {
			data_container& container;
			cell_id ob;
			iterator_cell_foreach_local_locations_as_cell_generator(data_container& c, cell_id o) : container(c), ob(o) {}
			DCON_RELEASE_INLINE iterator_cell_foreach_local_locations_as_cell begin() const noexcept {
				return iterator_cell_foreach_local_locations_as_cell(container, ob);
			}
			DCON_RELEASE_INLINE iterator_cell_foreach_local_locations_as_cell end() const noexcept {
				return iterator_cell_foreach_local_locations_as_cell(container, ob, 0);
			}
		};
		struct const_iterator_cell_foreach_local_locations_as_cell_generator {
			data_container const& container;
			cell_id ob;
			const_iterator_cell_foreach_local_locations_as_cell_generator(data_container const& c, cell_id o) : container(c), ob(o) {}
			DCON_RELEASE_INLINE const_iterator_cell_foreach_local_locations_as_cell begin() const noexcept {
				return const_iterator_cell_foreach_local_locations_as_cell(container, ob);
			}
			DCON_RELEASE_INLINE const_iterator_cell_foreach_local_locations_as_cell end() const noexcept {
				return const_iterator_cell_foreach_local_locations_as_cell(container, ob, 0);
			}
		};
		
		class object_iterator_local_locations {
			private:
			data_container& container;
			uint32_t index = 0;
			public:
			object_iterator_local_locations(data_container& c, uint32_t i) noexcept;
			DCON_RELEASE_INLINE object_iterator_local_locations& operator++() noexcept;
			DCON_RELEASE_INLINE object_iterator_local_locations& operator--() noexcept;
			DCON_RELEASE_INLINE bool operator==(object_iterator_local_locations const& o) const noexcept {
				return &container == &o.container && index == o.index;
			}
			DCON_RELEASE_INLINE bool operator!=(object_iterator_local_locations const& o) const noexcept {
				return !(*this == o);
			}
			DCON_RELEASE_INLINE local_locations_fat_id operator*() const noexcept {
				return local_locations_fat_id(container, local_locations_id(local_locations_id::value_base_t(index)));
			}
			DCON_RELEASE_INLINE object_iterator_local_locations& operator+=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) + n);
				return *this;
			}
			DCON_RELEASE_INLINE object_iterator_local_locations& operator-=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) - n);
				return *this;
			}
			DCON_RELEASE_INLINE object_iterator_local_locations operator+(int32_t n) const noexcept {
				return object_iterator_local_locations(container, uint32_t(int32_t(index) + n));
			}
			DCON_RELEASE_INLINE object_iterator_local_locations operator-(int32_t n) const noexcept {
				return object_iterator_local_locations(container, uint32_t(int32_t(index) - n));
			}
			DCON_RELEASE_INLINE int32_t operator-(object_iterator_local_locations const& o) const noexcept {
				return int32_t(index) - int32_t(o.index);
			}
			DCON_RELEASE_INLINE bool operator>(object_iterator_local_locations const& o) const noexcept {
				return index > o.index;
			}
			DCON_RELEASE_INLINE bool operator>=(object_iterator_local_locations const& o) const noexcept {
				return index >= o.index;
			}
			DCON_RELEASE_INLINE bool operator<(object_iterator_local_locations const& o) const noexcept {
				return index < o.index;
			}
			DCON_RELEASE_INLINE bool operator<=(object_iterator_local_locations const& o) const noexcept {
				return index <= o.index;
			}
			DCON_RELEASE_INLINE local_locations_fat_id operator[](int32_t n) const noexcept {
				return local_locations_fat_id(container, local_locations_id(local_locations_id::value_base_t(int32_t(index) + n)));
			}
		};
		class const_object_iterator_local_locations {
			private:
			data_container const& container;
			uint32_t index = 0;
			public:
			const_object_iterator_local_locations(data_container const& c, uint32_t i) noexcept;
			DCON_RELEASE_INLINE const_object_iterator_local_locations& operator++() noexcept;
			DCON_RELEASE_INLINE const_object_iterator_local_locations& operator--() noexcept;
			DCON_RELEASE_INLINE bool operator==(const_object_iterator_local_locations const& o) const noexcept {
				return &container == &o.container && index == o.index;
			}
			DCON_RELEASE_INLINE bool operator!=(const_object_iterator_local_locations const& o) const noexcept {
				return !(*this == o);
			}
			DCON_RELEASE_INLINE local_locations_const_fat_id operator*() const noexcept {
				return local_locations_const_fat_id(container, local_locations_id(local_locations_id::value_base_t(index)));
			}
			DCON_RELEASE_INLINE const_object_iterator_local_locations& operator+=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) + n);
				return *this;
			}
			DCON_RELEASE_INLINE const_object_iterator_local_locations& operator-=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) - n);
				return *this;
			}
			DCON_RELEASE_INLINE const_object_iterator_local_locations operator+(int32_t n) const noexcept {
				return const_object_iterator_local_locations(container, uint32_t(int32_t(index) + n));
			}
			DCON_RELEASE_INLINE const_object_iterator_local_locations operator-(int32_t n) const noexcept {
				return const_object_iterator_local_locations(container, uint32_t(int32_t(index) - n));
			}
			DCON_RELEASE_INLINE int32_t operator-(const_object_iterator_local_locations const& o) const noexcept {
				return int32_t(index) - int32_t(o.index);
			}
			DCON_RELEASE_INLINE bool operator>(const_object_iterator_local_locations const& o) const noexcept {
				return index > o.index;
			}
			DCON_RELEASE_INLINE bool operator>=(const_object_iterator_local_locations const& o) const noexcept {
				return index >= o.index;
			}
			DCON_RELEASE_INLINE bool operator<(const_object_iterator_local_locations const& o) const noexcept {
				return index < o.index;
			}
			DCON_RELEASE_INLINE bool operator<=(const_object_iterator_local_locations const& o) const noexcept {
				return index <= o.index;
			}
			DCON_RELEASE_INLINE local_locations_const_fat_id operator[](int32_t n) const noexcept {
				return local_locations_const_fat_id(container, local_locations_id(local_locations_id::value_base_t(int32_t(index) + n)));
			}
		};
		
		class object_iterator_character_position {
			private:
			data_container& container;
			uint32_t index = 0;
			public:
			object_iterator_character_position(data_container& c, uint32_t i) noexcept;
			DCON_RELEASE_INLINE object_iterator_character_position& operator++() noexcept;
			DCON_RELEASE_INLINE object_iterator_character_position& operator--() noexcept;
			DCON_RELEASE_INLINE bool operator==(object_iterator_character_position const& o) const noexcept {
				return &container == &o.container && index == o.index;
			}
			DCON_RELEASE_INLINE bool operator!=(object_iterator_character_position const& o) const noexcept {
				return !(*this == o);
			}
			DCON_RELEASE_INLINE character_position_fat_id operator*() const noexcept {
				return character_position_fat_id(container, character_position_id(character_position_id::value_base_t(index)));
			}
			DCON_RELEASE_INLINE object_iterator_character_position& operator+=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) + n);
				return *this;
			}
			DCON_RELEASE_INLINE object_iterator_character_position& operator-=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) - n);
				return *this;
			}
			DCON_RELEASE_INLINE object_iterator_character_position operator+(int32_t n) const noexcept {
				return object_iterator_character_position(container, uint32_t(int32_t(index) + n));
			}
			DCON_RELEASE_INLINE object_iterator_character_position operator-(int32_t n) const noexcept {
				return object_iterator_character_position(container, uint32_t(int32_t(index) - n));
			}
			DCON_RELEASE_INLINE int32_t operator-(object_iterator_character_position const& o) const noexcept {
				return int32_t(index) - int32_t(o.index);
			}
			DCON_RELEASE_INLINE bool operator>(object_iterator_character_position const& o) const noexcept {
				return index > o.index;
			}
			DCON_RELEASE_INLINE bool operator>=(object_iterator_character_position const& o) const noexcept {
				return index >= o.index;
			}
			DCON_RELEASE_INLINE bool operator<(object_iterator_character_position const& o) const noexcept {
				return index < o.index;
			}
			DCON_RELEASE_INLINE bool operator<=(object_iterator_character_position const& o) const noexcept {
				return index <= o.index;
			}
			DCON_RELEASE_INLINE character_position_fat_id operator[](int32_t n) const noexcept {
				return character_position_fat_id(container, character_position_id(character_position_id::value_base_t(int32_t(index) + n)));
			}
		};
		class const_object_iterator_character_position {
			private:
			data_container const& container;
			uint32_t index = 0;
			public:
			const_object_iterator_character_position(data_container const& c, uint32_t i) noexcept;
			DCON_RELEASE_INLINE const_object_iterator_character_position& operator++() noexcept;
			DCON_RELEASE_INLINE const_object_iterator_character_position& operator--() noexcept;
			DCON_RELEASE_INLINE bool operator==(const_object_iterator_character_position const& o) const noexcept {
				return &container == &o.container && index == o.index;
			}
			DCON_RELEASE_INLINE bool operator!=(const_object_iterator_character_position const& o) const noexcept {
				return !(*this == o);
			}
			DCON_RELEASE_INLINE character_position_const_fat_id operator*() const noexcept {
				return character_position_const_fat_id(container, character_position_id(character_position_id::value_base_t(index)));
			}
			DCON_RELEASE_INLINE const_object_iterator_character_position& operator+=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) + n);
				return *this;
			}
			DCON_RELEASE_INLINE const_object_iterator_character_position& operator-=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) - n);
				return *this;
			}
			DCON_RELEASE_INLINE const_object_iterator_character_position operator+(int32_t n) const noexcept {
				return const_object_iterator_character_position(container, uint32_t(int32_t(index) + n));
			}
			DCON_RELEASE_INLINE const_object_iterator_character_position operator-(int32_t n) const noexcept {
				return const_object_iterator_character_position(container, uint32_t(int32_t(index) - n));
			}
			DCON_RELEASE_INLINE int32_t operator-(const_object_iterator_character_position const& o) const noexcept {
				return int32_t(index) - int32_t(o.index);
			}
			DCON_RELEASE_INLINE bool operator>(const_object_iterator_character_position const& o) const noexcept {
				return index > o.index;
			}
			DCON_RELEASE_INLINE bool operator>=(const_object_iterator_character_position const& o) const noexcept {
				return index >= o.index;
			}
			DCON_RELEASE_INLINE bool operator<(const_object_iterator_character_position const& o) const noexcept {
				return index < o.index;
			}
			DCON_RELEASE_INLINE bool operator<=(const_object_iterator_character_position const& o) const noexcept {
				return index <= o.index;
			}
			DCON_RELEASE_INLINE character_position_const_fat_id operator[](int32_t n) const noexcept {
				return character_position_const_fat_id(container, character_position_id(character_position_id::value_base_t(int32_t(index) + n)));
			}
		};
		
		class object_iterator_owned_character {
			private:
			data_container& container;
			uint32_t index = 0;
			public:
			object_iterator_owned_character(data_container& c, uint32_t i) noexcept;
			DCON_RELEASE_INLINE object_iterator_owned_character& operator++() noexcept;
			DCON_RELEASE_INLINE object_iterator_owned_character& operator--() noexcept;
			DCON_RELEASE_INLINE bool operator==(object_iterator_owned_character const& o) const noexcept {
				return &container == &o.container && index == o.index;
			}
			DCON_RELEASE_INLINE bool operator!=(object_iterator_owned_character const& o) const noexcept {
				return !(*this == o);
			}
			DCON_RELEASE_INLINE owned_character_fat_id operator*() const noexcept {
				return owned_character_fat_id(container, owned_character_id(owned_character_id::value_base_t(index)));
			}
			DCON_RELEASE_INLINE object_iterator_owned_character& operator+=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) + n);
				return *this;
			}
			DCON_RELEASE_INLINE object_iterator_owned_character& operator-=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) - n);
				return *this;
			}
			DCON_RELEASE_INLINE object_iterator_owned_character operator+(int32_t n) const noexcept {
				return object_iterator_owned_character(container, uint32_t(int32_t(index) + n));
			}
			DCON_RELEASE_INLINE object_iterator_owned_character operator-(int32_t n) const noexcept {
				return object_iterator_owned_character(container, uint32_t(int32_t(index) - n));
			}
			DCON_RELEASE_INLINE int32_t operator-(object_iterator_owned_character const& o) const noexcept {
				return int32_t(index) - int32_t(o.index);
			}
			DCON_RELEASE_INLINE bool operator>(object_iterator_owned_character const& o) const noexcept {
				return index > o.index;
			}
			DCON_RELEASE_INLINE bool operator>=(object_iterator_owned_character const& o) const noexcept {
				return index >= o.index;
			}
			DCON_RELEASE_INLINE bool operator<(object_iterator_owned_character const& o) const noexcept {
				return index < o.index;
			}
			DCON_RELEASE_INLINE bool operator<=(object_iterator_owned_character const& o) const noexcept {
				return index <= o.index;
			}
			DCON_RELEASE_INLINE owned_character_fat_id operator[](int32_t n) const noexcept {
				return owned_character_fat_id(container, owned_character_id(owned_character_id::value_base_t(int32_t(index) + n)));
			}
		};
		class const_object_iterator_owned_character {
			private:
			data_container const& container;
			uint32_t index = 0;
			public:
			const_object_iterator_owned_character(data_container const& c, uint32_t i) noexcept;
			DCON_RELEASE_INLINE const_object_iterator_owned_character& operator++() noexcept;
			DCON_RELEASE_INLINE const_object_iterator_owned_character& operator--() noexcept;
			DCON_RELEASE_INLINE bool operator==(const_object_iterator_owned_character const& o) const noexcept {
				return &container == &o.container && index == o.index;
			}
			DCON_RELEASE_INLINE bool operator!=(const_object_iterator_owned_character const& o) const noexcept {
				return !(*this == o);
			}
			DCON_RELEASE_INLINE owned_character_const_fat_id operator*() const noexcept {
				return owned_character_const_fat_id(container, owned_character_id(owned_character_id::value_base_t(index)));
			}
			DCON_RELEASE_INLINE const_object_iterator_owned_character& operator+=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) + n);
				return *this;
			}
			DCON_RELEASE_INLINE const_object_iterator_owned_character& operator-=(int32_t n) noexcept {
				index = uint32_t(int32_t(index) - n);
				return *this;
			}
			DCON_RELEASE_INLINE const_object_iterator_owned_character operator+(int32_t n) const noexcept {
				return const_object_iterator_owned_character(container, uint32_t(int32_t(index) + n));
			}
			DCON_RELEASE_INLINE const_object_iterator_owned_character operator-(int32_t n) const noexcept {
				return const_object_iterator_owned_character(container, uint32_t(int32_t(index) - n));
			}
			DCON_RELEASE_INLINE int32_t operator-(const_object_iterator_owned_character const& o) const noexcept {
				return int32_t(index) - int32_t(o.index);
			}
			DCON_RELEASE_INLINE bool operator>(const_object_iterator_owned_character const& o) const noexcept {
				return index > o.index;
			}
			DCON_RELEASE_INLINE bool operator>=(const_object_iterator_owned_character const& o) const noexcept {
				return index >= o.index;
			}
			DCON_RELEASE_INLINE bool operator<(const_object_iterator_owned_character const& o) const noexcept {
				return index < o.index;
			}
			DCON_RELEASE_INLINE bool operator<=(const_object_iterator_owned_character const& o) const noexcept {
				return index <= o.index;
			}
			DCON_RELEASE_INLINE owned_character_const_fat_id operator[](int32_t n) const noexcept {
				return owned_character_const_fat_id(container, owned_character_id(owned_character_id::value_base_t(int32_t(index) + n)));
			}
		};
		
	}

	class alignas(64) data_container {
		public:
		internal::user_class user;
		internal::character_class character;
		internal::location_class location;
		internal::cell_class cell;
		internal::local_locations_class local_locations;
		internal::character_position_class character_position;
		internal::owned_character_class owned_character;

		//
		// Functions for user:
		//
		//
		// accessors for user: login
		//
		DCON_RELEASE_INLINE uint8_t const& user_get_login(user_id id, uint8_t n) const noexcept {
			return user.m_login.vptr(dcon::get_index(n))[id.index()];
		}
		DCON_RELEASE_INLINE uint8_t& user_get_login(user_id id, uint8_t n) noexcept {
			return user.m_login.vptr(dcon::get_index(n))[id.index()];
		}
		DCON_RELEASE_INLINE uint32_t user_get_login_size() const noexcept {
			return user.m_login.size;
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::value_to_vector_type<uint8_t> user_get_login(ve::contiguous_tags<user_id> id, uint8_t n) const noexcept {
			return ve::load(id, user.m_login.vptr(dcon::get_index(n)));
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<uint8_t> user_get_login(ve::partial_contiguous_tags<user_id> id, uint8_t n) const noexcept {
			return ve::load(id, user.m_login.vptr(dcon::get_index(n)));
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<uint8_t> user_get_login(ve::tagged_vector<user_id> id, uint8_t n) const noexcept {
			return ve::load(id, user.m_login.vptr(dcon::get_index(n)));
		}
		#endif
		DCON_RELEASE_INLINE void user_set_login(user_id id, uint8_t n, uint8_t value) noexcept {
			#ifdef DCON_TRAP_INVALID_STORE
			assert(id.index() >= 0);
			assert(dcon::get_index(n) >= 0);
			#endif
			user.m_login.vptr(dcon::get_index(n))[id.index()] = value;
		}
		DCON_RELEASE_INLINE void user_resize_login(uint32_t size) noexcept {
			return user.m_login.resize(size, user.size_used);
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE void user_set_login(ve::contiguous_tags<user_id> id, uint8_t n, ve::value_to_vector_type<uint8_t> values) noexcept {
			ve::store(id, user.m_login.vptr(dcon::get_index(n)), values);
		}
		DCON_RELEASE_INLINE void user_set_login(ve::partial_contiguous_tags<user_id> id, uint8_t n, ve::value_to_vector_type<uint8_t> values) noexcept {
			ve::store(id, user.m_login.vptr(dcon::get_index(n)), values);
		}
		DCON_RELEASE_INLINE void user_set_login(ve::tagged_vector<user_id> id, uint8_t n, ve::value_to_vector_type<uint8_t> values) noexcept {
			ve::store(id, user.m_login.vptr(dcon::get_index(n)), values);
		}
		#endif
		//
		// accessors for user: password_hash
		//
		DCON_RELEASE_INLINE int32_t const& user_get_password_hash(user_id id, uint8_t n) const noexcept {
			return user.m_password_hash.vptr(dcon::get_index(n))[id.index()];
		}
		DCON_RELEASE_INLINE int32_t& user_get_password_hash(user_id id, uint8_t n) noexcept {
			return user.m_password_hash.vptr(dcon::get_index(n))[id.index()];
		}
		DCON_RELEASE_INLINE uint32_t user_get_password_hash_size() const noexcept {
			return user.m_password_hash.size;
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::value_to_vector_type<int32_t> user_get_password_hash(ve::contiguous_tags<user_id> id, uint8_t n) const noexcept {
			return ve::load(id, user.m_password_hash.vptr(dcon::get_index(n)));
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<int32_t> user_get_password_hash(ve::partial_contiguous_tags<user_id> id, uint8_t n) const noexcept {
			return ve::load(id, user.m_password_hash.vptr(dcon::get_index(n)));
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<int32_t> user_get_password_hash(ve::tagged_vector<user_id> id, uint8_t n) const noexcept {
			return ve::load(id, user.m_password_hash.vptr(dcon::get_index(n)));
		}
		#endif
		DCON_RELEASE_INLINE void user_set_password_hash(user_id id, uint8_t n, int32_t value) noexcept {
			#ifdef DCON_TRAP_INVALID_STORE
			assert(id.index() >= 0);
			assert(dcon::get_index(n) >= 0);
			#endif
			user.m_password_hash.vptr(dcon::get_index(n))[id.index()] = value;
		}
		DCON_RELEASE_INLINE void user_resize_password_hash(uint32_t size) noexcept {
			return user.m_password_hash.resize(size, user.size_used);
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE void user_set_password_hash(ve::contiguous_tags<user_id> id, uint8_t n, ve::value_to_vector_type<int32_t> values) noexcept {
			ve::store(id, user.m_password_hash.vptr(dcon::get_index(n)), values);
		}
		DCON_RELEASE_INLINE void user_set_password_hash(ve::partial_contiguous_tags<user_id> id, uint8_t n, ve::value_to_vector_type<int32_t> values) noexcept {
			ve::store(id, user.m_password_hash.vptr(dcon::get_index(n)), values);
		}
		DCON_RELEASE_INLINE void user_set_password_hash(ve::tagged_vector<user_id> id, uint8_t n, ve::value_to_vector_type<int32_t> values) noexcept {
			ve::store(id, user.m_password_hash.vptr(dcon::get_index(n)), values);
		}
		#endif
		//
		// accessors for user: is_tester
		//
		DCON_RELEASE_INLINE bool user_get_is_tester(user_id id) const noexcept {
			return dcon::bit_vector_test(user.m_is_tester.vptr(), id.index());
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::vbitfield_type user_get_is_tester(ve::contiguous_tags<user_id> id) const noexcept {
			return ve::load(id, user.m_is_tester.vptr());
		}
		DCON_RELEASE_INLINE ve::vbitfield_type user_get_is_tester(ve::partial_contiguous_tags<user_id> id) const noexcept {
			return ve::load(id, user.m_is_tester.vptr());
		}
		DCON_RELEASE_INLINE ve::vbitfield_type user_get_is_tester(ve::tagged_vector<user_id> id) const noexcept {
			return ve::load(id, user.m_is_tester.vptr());
		}
		#endif
		DCON_RELEASE_INLINE void user_set_is_tester(user_id id, bool value) noexcept {
			#ifdef DCON_TRAP_INVALID_STORE
			assert(id.index() >= 0);
			#endif
			dcon::bit_vector_set(user.m_is_tester.vptr(), id.index(), value);
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE void user_set_is_tester(ve::contiguous_tags<user_id> id, ve::vbitfield_type values) noexcept {
			ve::store(id, user.m_is_tester.vptr(), values);
		}
		DCON_RELEASE_INLINE void user_set_is_tester(ve::partial_contiguous_tags<user_id> id, ve::vbitfield_type values) noexcept {
			ve::store(id, user.m_is_tester.vptr(), values);
		}
		DCON_RELEASE_INLINE void user_set_is_tester(ve::tagged_vector<user_id> id, ve::vbitfield_type values) noexcept {
			ve::store(id, user.m_is_tester.vptr(), values);
		}
		#endif
		//
		// accessors for user: is_admin
		//
		DCON_RELEASE_INLINE bool user_get_is_admin(user_id id) const noexcept {
			return dcon::bit_vector_test(user.m_is_admin.vptr(), id.index());
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::vbitfield_type user_get_is_admin(ve::contiguous_tags<user_id> id) const noexcept {
			return ve::load(id, user.m_is_admin.vptr());
		}
		DCON_RELEASE_INLINE ve::vbitfield_type user_get_is_admin(ve::partial_contiguous_tags<user_id> id) const noexcept {
			return ve::load(id, user.m_is_admin.vptr());
		}
		DCON_RELEASE_INLINE ve::vbitfield_type user_get_is_admin(ve::tagged_vector<user_id> id) const noexcept {
			return ve::load(id, user.m_is_admin.vptr());
		}
		#endif
		DCON_RELEASE_INLINE void user_set_is_admin(user_id id, bool value) noexcept {
			#ifdef DCON_TRAP_INVALID_STORE
			assert(id.index() >= 0);
			#endif
			dcon::bit_vector_set(user.m_is_admin.vptr(), id.index(), value);
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE void user_set_is_admin(ve::contiguous_tags<user_id> id, ve::vbitfield_type values) noexcept {
			ve::store(id, user.m_is_admin.vptr(), values);
		}
		DCON_RELEASE_INLINE void user_set_is_admin(ve::partial_contiguous_tags<user_id> id, ve::vbitfield_type values) noexcept {
			ve::store(id, user.m_is_admin.vptr(), values);
		}
		DCON_RELEASE_INLINE void user_set_is_admin(ve::tagged_vector<user_id> id, ve::vbitfield_type values) noexcept {
			ve::store(id, user.m_is_admin.vptr(), values);
		}
		#endif
		//
		// accessors for user: session
		//
		DCON_RELEASE_INLINE int8_t const& user_get_session(user_id id, uint8_t n) const noexcept {
			return user.m_session.vptr(dcon::get_index(n))[id.index()];
		}
		DCON_RELEASE_INLINE int8_t& user_get_session(user_id id, uint8_t n) noexcept {
			return user.m_session.vptr(dcon::get_index(n))[id.index()];
		}
		DCON_RELEASE_INLINE uint32_t user_get_session_size() const noexcept {
			return user.m_session.size;
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::value_to_vector_type<int8_t> user_get_session(ve::contiguous_tags<user_id> id, uint8_t n) const noexcept {
			return ve::load(id, user.m_session.vptr(dcon::get_index(n)));
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<int8_t> user_get_session(ve::partial_contiguous_tags<user_id> id, uint8_t n) const noexcept {
			return ve::load(id, user.m_session.vptr(dcon::get_index(n)));
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<int8_t> user_get_session(ve::tagged_vector<user_id> id, uint8_t n) const noexcept {
			return ve::load(id, user.m_session.vptr(dcon::get_index(n)));
		}
		#endif
		DCON_RELEASE_INLINE void user_set_session(user_id id, uint8_t n, int8_t value) noexcept {
			#ifdef DCON_TRAP_INVALID_STORE
			assert(id.index() >= 0);
			assert(dcon::get_index(n) >= 0);
			#endif
			user.m_session.vptr(dcon::get_index(n))[id.index()] = value;
		}
		DCON_RELEASE_INLINE void user_resize_session(uint32_t size) noexcept {
			return user.m_session.resize(size, user.size_used);
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE void user_set_session(ve::contiguous_tags<user_id> id, uint8_t n, ve::value_to_vector_type<int8_t> values) noexcept {
			ve::store(id, user.m_session.vptr(dcon::get_index(n)), values);
		}
		DCON_RELEASE_INLINE void user_set_session(ve::partial_contiguous_tags<user_id> id, uint8_t n, ve::value_to_vector_type<int8_t> values) noexcept {
			ve::store(id, user.m_session.vptr(dcon::get_index(n)), values);
		}
		DCON_RELEASE_INLINE void user_set_session(ve::tagged_vector<user_id> id, uint8_t n, ve::value_to_vector_type<int8_t> values) noexcept {
			ve::store(id, user.m_session.vptr(dcon::get_index(n)), values);
		}
		#endif
		DCON_RELEASE_INLINE owned_character_id user_get_owned_character_as_user(user_id id) const noexcept {
			return (id.value <= user.size_used) ? owned_character_id(owned_character_id::value_base_t(id.index())) : owned_character_id();
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::contiguous_tags<owned_character_id> user_get_owned_character_as_user(ve::contiguous_tags<user_id> id) const noexcept {
			return ve::contiguous_tags<owned_character_id>(id.value);
		}
		DCON_RELEASE_INLINE ve::partial_contiguous_tags<owned_character_id> user_get_owned_character_as_user(ve::partial_contiguous_tags<user_id> id) const noexcept {
			return ve::partial_contiguous_tags<owned_character_id>(id.value, id.subcount);
		}
		DCON_RELEASE_INLINE ve::tagged_vector<owned_character_id> user_get_owned_character_as_user(ve::tagged_vector<user_id> id) const noexcept {
			return ve::tagged_vector<owned_character_id>(id, std::true_type{});
		}
		#endif
		DCON_RELEASE_INLINE void user_remove_owned_character_as_user(user_id id) noexcept {
			if(owned_character_is_valid(owned_character_id(owned_character_id::value_base_t(id.index())))) {
				owned_character_set_user(owned_character_id(owned_character_id::value_base_t(id.index())), user_id());
			}
		}
		DCON_RELEASE_INLINE owned_character_id user_get_owned_character(user_id id) const noexcept {
			return (id.value <= user.size_used) ? owned_character_id(owned_character_id::value_base_t(id.index())) : owned_character_id();
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::contiguous_tags<owned_character_id> user_get_owned_character(ve::contiguous_tags<user_id> id) const noexcept {
			return ve::contiguous_tags<owned_character_id>(id.value);
		}
		DCON_RELEASE_INLINE ve::partial_contiguous_tags<owned_character_id> user_get_owned_character(ve::partial_contiguous_tags<user_id> id) const noexcept {
			return ve::partial_contiguous_tags<owned_character_id>(id.value, id.subcount);
		}
		DCON_RELEASE_INLINE ve::tagged_vector<owned_character_id> user_get_owned_character(ve::tagged_vector<user_id> id) const noexcept {
			return ve::tagged_vector<owned_character_id>(id, std::true_type{});
		}
		#endif
		DCON_RELEASE_INLINE void user_remove_owned_character(user_id id) noexcept {
			if(owned_character_is_valid(owned_character_id(owned_character_id::value_base_t(id.index())))) {
				owned_character_set_user(owned_character_id(owned_character_id::value_base_t(id.index())), user_id());
			}
		}
		DCON_RELEASE_INLINE character_id user_get_character_from_owned_character(user_id ref_id) const {
			return owned_character_get_character(owned_character_id(owned_character_id::value_base_t(ref_id.index())));
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::value_to_vector_type<character_id> user_get_character_from_owned_character(ve::contiguous_tags<user_id> ref_id) const {
			return owned_character_get_character(ve::contiguous_tags<owned_character_id>(ref_id.value));
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<character_id> user_get_character_from_owned_character(ve::partial_contiguous_tags<user_id> ref_id) const {
			return owned_character_get_character(ve::partial_contiguous_tags<owned_character_id>(ref_id.value, ref_id.subcount));
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<character_id> user_get_character_from_owned_character(ve::tagged_vector<user_id> ref_id) const {
			return owned_character_get_character(ve::tagged_vector<owned_character_id>(ref_id, std::true_type{}));
		}
		#endif
		void user_set_character_from_owned_character(user_id ref_id, character_id val) {
			owned_character_set_character(owned_character_id(owned_character_id::value_base_t(ref_id.index())), val);
		}
		DCON_RELEASE_INLINE bool user_is_valid(user_id id) const noexcept {
			return bool(id) && uint32_t(id.index()) < user.size_used;
		}
		
		uint32_t user_size() const noexcept { return user.size_used; }

		//
		// Functions for character:
		//
		//
		// accessors for character: name
		//
		DCON_RELEASE_INLINE uint8_t const& character_get_name(character_id id, uint8_t n) const noexcept {
			return character.m_name.vptr(dcon::get_index(n))[id.index()];
		}
		DCON_RELEASE_INLINE uint8_t& character_get_name(character_id id, uint8_t n) noexcept {
			return character.m_name.vptr(dcon::get_index(n))[id.index()];
		}
		DCON_RELEASE_INLINE uint32_t character_get_name_size() const noexcept {
			return character.m_name.size;
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::value_to_vector_type<uint8_t> character_get_name(ve::contiguous_tags<character_id> id, uint8_t n) const noexcept {
			return ve::load(id, character.m_name.vptr(dcon::get_index(n)));
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<uint8_t> character_get_name(ve::partial_contiguous_tags<character_id> id, uint8_t n) const noexcept {
			return ve::load(id, character.m_name.vptr(dcon::get_index(n)));
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<uint8_t> character_get_name(ve::tagged_vector<character_id> id, uint8_t n) const noexcept {
			return ve::load(id, character.m_name.vptr(dcon::get_index(n)));
		}
		#endif
		DCON_RELEASE_INLINE void character_set_name(character_id id, uint8_t n, uint8_t value) noexcept {
			#ifdef DCON_TRAP_INVALID_STORE
			assert(id.index() >= 0);
			assert(dcon::get_index(n) >= 0);
			#endif
			character.m_name.vptr(dcon::get_index(n))[id.index()] = value;
		}
		DCON_RELEASE_INLINE void character_resize_name(uint32_t size) noexcept {
			return character.m_name.resize(size, character.size_used);
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE void character_set_name(ve::contiguous_tags<character_id> id, uint8_t n, ve::value_to_vector_type<uint8_t> values) noexcept {
			ve::store(id, character.m_name.vptr(dcon::get_index(n)), values);
		}
		DCON_RELEASE_INLINE void character_set_name(ve::partial_contiguous_tags<character_id> id, uint8_t n, ve::value_to_vector_type<uint8_t> values) noexcept {
			ve::store(id, character.m_name.vptr(dcon::get_index(n)), values);
		}
		DCON_RELEASE_INLINE void character_set_name(ve::tagged_vector<character_id> id, uint8_t n, ve::value_to_vector_type<uint8_t> values) noexcept {
			ve::store(id, character.m_name.vptr(dcon::get_index(n)), values);
		}
		#endif
		DCON_RELEASE_INLINE internal::const_iterator_character_foreach_character_position_as_character_generator character_get_character_position_as_character(character_id id) const {
			return internal::const_iterator_character_foreach_character_position_as_character_generator(*this, id);
		}
		DCON_RELEASE_INLINE internal::iterator_character_foreach_character_position_as_character_generator character_get_character_position_as_character(character_id id) {
			return internal::iterator_character_foreach_character_position_as_character_generator(*this, id);
		}
		template<typename T>
		DCON_RELEASE_INLINE void character_for_each_character_position_as_character(character_id id, T&& func) const {
			if(bool(id)) {
				auto vrange = dcon::get_range(character_position.character_storage, character_position.m_array_character.vptr()[id.index()]);
				std::for_each(vrange.first, vrange.second, func);
			}
		}
		DCON_RELEASE_INLINE std::pair<character_position_id const*, character_position_id const*> character_range_of_character_position_as_character(character_id id) const {
			if(bool(id)) {
				auto vrange = dcon::get_range(character_position.character_storage, character_position.m_array_character.vptr()[id.index()]);
				return std::pair<character_position_id const*, character_position_id const*>(vrange.first, vrange.second);
			} else {
				return std::pair<character_position_id const*, character_position_id const*>(nullptr, nullptr);
			}
		}
		void character_remove_all_character_position_as_character(character_id id) noexcept {
			auto rng = character_range_of_character_position_as_character(id);
			dcon::local_vector<character_position_id> temp(rng.first, rng.second);
			std::for_each(temp.begin(), temp.end(), [t = this](character_position_id i) { t->character_position_set_character(i, character_id()); });
		}
		DCON_RELEASE_INLINE internal::const_iterator_character_foreach_character_position_as_character_generator character_get_character_position(character_id id) const {
			return internal::const_iterator_character_foreach_character_position_as_character_generator(*this, id);
		}
		DCON_RELEASE_INLINE internal::iterator_character_foreach_character_position_as_character_generator character_get_character_position(character_id id) {
			return internal::iterator_character_foreach_character_position_as_character_generator(*this, id);
		}
		template<typename T>
		DCON_RELEASE_INLINE void character_for_each_character_position(character_id id, T&& func) const {
			if(bool(id)) {
				auto vrange = dcon::get_range(character_position.character_storage, character_position.m_array_character.vptr()[id.index()]);
				std::for_each(vrange.first, vrange.second, func);
			}
		}
		DCON_RELEASE_INLINE std::pair<character_position_id const*, character_position_id const*> character_range_of_character_position(character_id id) const {
			if(bool(id)) {
				auto vrange = dcon::get_range(character_position.character_storage, character_position.m_array_character.vptr()[id.index()]);
				return std::pair<character_position_id const*, character_position_id const*>(vrange.first, vrange.second);
			} else {
				return std::pair<character_position_id const*, character_position_id const*>(nullptr, nullptr);
			}
		}
		void character_remove_all_character_position(character_id id) noexcept {
			auto rng = character_range_of_character_position_as_character(id);
			dcon::local_vector<character_position_id> temp(rng.first, rng.second);
			std::for_each(temp.begin(), temp.end(), [t = this](character_position_id i) { t->character_position_set_character(i, character_id()); });
		}
		DCON_RELEASE_INLINE owned_character_id character_get_owned_character_as_character(character_id id) const noexcept {
			return owned_character.m_link_back_character.vptr()[id.index()];
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::tagged_vector<owned_character_id> character_get_owned_character_as_character(ve::contiguous_tags<character_id> id) const noexcept {
			return ve::load(id, owned_character.m_link_back_character.vptr());
		}
		DCON_RELEASE_INLINE ve::tagged_vector<owned_character_id> character_get_owned_character_as_character(ve::partial_contiguous_tags<character_id> id) const noexcept {
			return ve::load(id, owned_character.m_link_back_character.vptr());
		}
		DCON_RELEASE_INLINE ve::tagged_vector<owned_character_id> character_get_owned_character_as_character(ve::tagged_vector<character_id> id) const noexcept {
			return ve::load(id, owned_character.m_link_back_character.vptr());
		}
		#endif
		DCON_RELEASE_INLINE void character_remove_owned_character_as_character(character_id id) noexcept {
			if(auto backid = owned_character.m_link_back_character.vptr()[id.index()]; bool(backid)) {
				owned_character_set_character(backid, character_id());
			}
		}
		DCON_RELEASE_INLINE owned_character_id character_get_owned_character(character_id id) const noexcept {
			return owned_character.m_link_back_character.vptr()[id.index()];
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::tagged_vector<owned_character_id> character_get_owned_character(ve::contiguous_tags<character_id> id) const noexcept {
			return ve::load(id, owned_character.m_link_back_character.vptr());
		}
		DCON_RELEASE_INLINE ve::tagged_vector<owned_character_id> character_get_owned_character(ve::partial_contiguous_tags<character_id> id) const noexcept {
			return ve::load(id, owned_character.m_link_back_character.vptr());
		}
		DCON_RELEASE_INLINE ve::tagged_vector<owned_character_id> character_get_owned_character(ve::tagged_vector<character_id> id) const noexcept {
			return ve::load(id, owned_character.m_link_back_character.vptr());
		}
		#endif
		DCON_RELEASE_INLINE void character_remove_owned_character(character_id id) noexcept {
			if(auto backid = owned_character.m_link_back_character.vptr()[id.index()]; bool(backid)) {
				owned_character_set_character(backid, character_id());
			}
		}
		user_id character_get_user_from_owned_character(character_id id) const {
			return owned_character_get_user(owned_character.m_link_back_character.vptr()[id.index()]);
		}
		#ifndef DCON_NO_VE
		ve::value_to_vector_type<user_id> character_get_user_from_owned_character(ve::contiguous_tags<character_id> id) const {
			auto ref_id = ve::load(id, owned_character.m_link_back_character.vptr());
			return owned_character_get_user(ref_id);
		}
		ve::value_to_vector_type<user_id> character_get_user_from_owned_character(ve::partial_contiguous_tags<character_id> id) const {
			auto ref_id = ve::load(id, owned_character.m_link_back_character.vptr());
			return owned_character_get_user(ref_id);
		}
		ve::value_to_vector_type<user_id> character_get_user_from_owned_character(ve::tagged_vector<character_id> id) const {
			auto ref_id = ve::load(id, owned_character.m_link_back_character.vptr());
			return owned_character_get_user(ref_id);
		}
		#endif
		void character_set_user_from_owned_character(character_id id, user_id val) {
			owned_character_set_character(owned_character_id(owned_character_id::value_base_t(val.index())), id);
		}
		DCON_RELEASE_INLINE bool character_is_valid(character_id id) const noexcept {
			return bool(id) && uint32_t(id.index()) < character.size_used && character.m__index.vptr()[id.index()] == id;
		}
		
		uint32_t character_size() const noexcept { return character.size_used; }

		//
		// Functions for location:
		//
		DCON_RELEASE_INLINE local_locations_id location_get_local_locations_as_location(location_id id) const noexcept {
			return (id.value <= location.size_used) ? local_locations_id(local_locations_id::value_base_t(id.index())) : local_locations_id();
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::contiguous_tags<local_locations_id> location_get_local_locations_as_location(ve::contiguous_tags<location_id> id) const noexcept {
			return ve::contiguous_tags<local_locations_id>(id.value);
		}
		DCON_RELEASE_INLINE ve::partial_contiguous_tags<local_locations_id> location_get_local_locations_as_location(ve::partial_contiguous_tags<location_id> id) const noexcept {
			return ve::partial_contiguous_tags<local_locations_id>(id.value, id.subcount);
		}
		DCON_RELEASE_INLINE ve::tagged_vector<local_locations_id> location_get_local_locations_as_location(ve::tagged_vector<location_id> id) const noexcept {
			return ve::tagged_vector<local_locations_id>(id, std::true_type{});
		}
		#endif
		DCON_RELEASE_INLINE void location_remove_local_locations_as_location(location_id id) noexcept {
			if(local_locations_is_valid(local_locations_id(local_locations_id::value_base_t(id.index())))) {
				local_locations_set_location(local_locations_id(local_locations_id::value_base_t(id.index())), location_id());
			}
		}
		DCON_RELEASE_INLINE local_locations_id location_get_local_locations(location_id id) const noexcept {
			return (id.value <= location.size_used) ? local_locations_id(local_locations_id::value_base_t(id.index())) : local_locations_id();
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::contiguous_tags<local_locations_id> location_get_local_locations(ve::contiguous_tags<location_id> id) const noexcept {
			return ve::contiguous_tags<local_locations_id>(id.value);
		}
		DCON_RELEASE_INLINE ve::partial_contiguous_tags<local_locations_id> location_get_local_locations(ve::partial_contiguous_tags<location_id> id) const noexcept {
			return ve::partial_contiguous_tags<local_locations_id>(id.value, id.subcount);
		}
		DCON_RELEASE_INLINE ve::tagged_vector<local_locations_id> location_get_local_locations(ve::tagged_vector<location_id> id) const noexcept {
			return ve::tagged_vector<local_locations_id>(id, std::true_type{});
		}
		#endif
		DCON_RELEASE_INLINE void location_remove_local_locations(location_id id) noexcept {
			if(local_locations_is_valid(local_locations_id(local_locations_id::value_base_t(id.index())))) {
				local_locations_set_location(local_locations_id(local_locations_id::value_base_t(id.index())), location_id());
			}
		}
		DCON_RELEASE_INLINE cell_id location_get_cell_from_local_locations(location_id ref_id) const {
			return local_locations_get_cell(local_locations_id(local_locations_id::value_base_t(ref_id.index())));
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::value_to_vector_type<cell_id> location_get_cell_from_local_locations(ve::contiguous_tags<location_id> ref_id) const {
			return local_locations_get_cell(ve::contiguous_tags<local_locations_id>(ref_id.value));
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<cell_id> location_get_cell_from_local_locations(ve::partial_contiguous_tags<location_id> ref_id) const {
			return local_locations_get_cell(ve::partial_contiguous_tags<local_locations_id>(ref_id.value, ref_id.subcount));
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<cell_id> location_get_cell_from_local_locations(ve::tagged_vector<location_id> ref_id) const {
			return local_locations_get_cell(ve::tagged_vector<local_locations_id>(ref_id, std::true_type{}));
		}
		#endif
		void location_set_cell_from_local_locations(location_id ref_id, cell_id val) {
			local_locations_set_cell(local_locations_id(local_locations_id::value_base_t(ref_id.index())), val);
		}
		DCON_RELEASE_INLINE character_position_id location_get_character_position_as_location(location_id id) const noexcept {
			return (id.value <= location.size_used) ? character_position_id(character_position_id::value_base_t(id.index())) : character_position_id();
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::contiguous_tags<character_position_id> location_get_character_position_as_location(ve::contiguous_tags<location_id> id) const noexcept {
			return ve::contiguous_tags<character_position_id>(id.value);
		}
		DCON_RELEASE_INLINE ve::partial_contiguous_tags<character_position_id> location_get_character_position_as_location(ve::partial_contiguous_tags<location_id> id) const noexcept {
			return ve::partial_contiguous_tags<character_position_id>(id.value, id.subcount);
		}
		DCON_RELEASE_INLINE ve::tagged_vector<character_position_id> location_get_character_position_as_location(ve::tagged_vector<location_id> id) const noexcept {
			return ve::tagged_vector<character_position_id>(id, std::true_type{});
		}
		#endif
		DCON_RELEASE_INLINE void location_remove_character_position_as_location(location_id id) noexcept {
			if(character_position_is_valid(character_position_id(character_position_id::value_base_t(id.index())))) {
				character_position_set_location(character_position_id(character_position_id::value_base_t(id.index())), location_id());
			}
		}
		DCON_RELEASE_INLINE character_position_id location_get_character_position(location_id id) const noexcept {
			return (id.value <= location.size_used) ? character_position_id(character_position_id::value_base_t(id.index())) : character_position_id();
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::contiguous_tags<character_position_id> location_get_character_position(ve::contiguous_tags<location_id> id) const noexcept {
			return ve::contiguous_tags<character_position_id>(id.value);
		}
		DCON_RELEASE_INLINE ve::partial_contiguous_tags<character_position_id> location_get_character_position(ve::partial_contiguous_tags<location_id> id) const noexcept {
			return ve::partial_contiguous_tags<character_position_id>(id.value, id.subcount);
		}
		DCON_RELEASE_INLINE ve::tagged_vector<character_position_id> location_get_character_position(ve::tagged_vector<location_id> id) const noexcept {
			return ve::tagged_vector<character_position_id>(id, std::true_type{});
		}
		#endif
		DCON_RELEASE_INLINE void location_remove_character_position(location_id id) noexcept {
			if(character_position_is_valid(character_position_id(character_position_id::value_base_t(id.index())))) {
				character_position_set_location(character_position_id(character_position_id::value_base_t(id.index())), location_id());
			}
		}
		DCON_RELEASE_INLINE character_id location_get_character_from_character_position(location_id ref_id) const {
			return character_position_get_character(character_position_id(character_position_id::value_base_t(ref_id.index())));
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::value_to_vector_type<character_id> location_get_character_from_character_position(ve::contiguous_tags<location_id> ref_id) const {
			return character_position_get_character(ve::contiguous_tags<character_position_id>(ref_id.value));
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<character_id> location_get_character_from_character_position(ve::partial_contiguous_tags<location_id> ref_id) const {
			return character_position_get_character(ve::partial_contiguous_tags<character_position_id>(ref_id.value, ref_id.subcount));
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<character_id> location_get_character_from_character_position(ve::tagged_vector<location_id> ref_id) const {
			return character_position_get_character(ve::tagged_vector<character_position_id>(ref_id, std::true_type{}));
		}
		#endif
		void location_set_character_from_character_position(location_id ref_id, character_id val) {
			character_position_set_character(character_position_id(character_position_id::value_base_t(ref_id.index())), val);
		}
		DCON_RELEASE_INLINE bool location_is_valid(location_id id) const noexcept {
			return bool(id) && uint32_t(id.index()) < location.size_used;
		}
		
		uint32_t location_size() const noexcept { return location.size_used; }

		//
		// Functions for cell:
		//
		//
		// accessors for cell: rat_smell
		//
		DCON_RELEASE_INLINE float const& cell_get_rat_smell(cell_id id) const noexcept {
			return cell.m_rat_smell.vptr()[id.index()];
		}
		DCON_RELEASE_INLINE float& cell_get_rat_smell(cell_id id) noexcept {
			return cell.m_rat_smell.vptr()[id.index()];
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::value_to_vector_type<float> cell_get_rat_smell(ve::contiguous_tags<cell_id> id) const noexcept {
			return ve::load(id, cell.m_rat_smell.vptr());
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<float> cell_get_rat_smell(ve::partial_contiguous_tags<cell_id> id) const noexcept {
			return ve::load(id, cell.m_rat_smell.vptr());
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<float> cell_get_rat_smell(ve::tagged_vector<cell_id> id) const noexcept {
			return ve::load(id, cell.m_rat_smell.vptr());
		}
		#endif
		DCON_RELEASE_INLINE void cell_set_rat_smell(cell_id id, float value) noexcept {
			#ifdef DCON_TRAP_INVALID_STORE
			assert(id.index() >= 0);
			#endif
			cell.m_rat_smell.vptr()[id.index()] = value;
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE void cell_set_rat_smell(ve::contiguous_tags<cell_id> id, ve::value_to_vector_type<float> values) noexcept {
			ve::store(id, cell.m_rat_smell.vptr(), values);
		}
		DCON_RELEASE_INLINE void cell_set_rat_smell(ve::partial_contiguous_tags<cell_id> id, ve::value_to_vector_type<float> values) noexcept {
			ve::store(id, cell.m_rat_smell.vptr(), values);
		}
		DCON_RELEASE_INLINE void cell_set_rat_smell(ve::tagged_vector<cell_id> id, ve::value_to_vector_type<float> values) noexcept {
			ve::store(id, cell.m_rat_smell.vptr(), values);
		}
		#endif
		DCON_RELEASE_INLINE internal::const_iterator_cell_foreach_local_locations_as_cell_generator cell_get_local_locations_as_cell(cell_id id) const {
			return internal::const_iterator_cell_foreach_local_locations_as_cell_generator(*this, id);
		}
		DCON_RELEASE_INLINE internal::iterator_cell_foreach_local_locations_as_cell_generator cell_get_local_locations_as_cell(cell_id id) {
			return internal::iterator_cell_foreach_local_locations_as_cell_generator(*this, id);
		}
		template<typename T>
		DCON_RELEASE_INLINE void cell_for_each_local_locations_as_cell(cell_id id, T&& func) const {
			if(bool(id)) {
				auto vrange = dcon::get_range(local_locations.cell_storage, local_locations.m_array_cell.vptr()[id.index()]);
				std::for_each(vrange.first, vrange.second, func);
			}
		}
		DCON_RELEASE_INLINE std::pair<local_locations_id const*, local_locations_id const*> cell_range_of_local_locations_as_cell(cell_id id) const {
			if(bool(id)) {
				auto vrange = dcon::get_range(local_locations.cell_storage, local_locations.m_array_cell.vptr()[id.index()]);
				return std::pair<local_locations_id const*, local_locations_id const*>(vrange.first, vrange.second);
			} else {
				return std::pair<local_locations_id const*, local_locations_id const*>(nullptr, nullptr);
			}
		}
		void cell_remove_all_local_locations_as_cell(cell_id id) noexcept {
			auto rng = cell_range_of_local_locations_as_cell(id);
			dcon::local_vector<local_locations_id> temp(rng.first, rng.second);
			std::for_each(temp.begin(), temp.end(), [t = this](local_locations_id i) { t->local_locations_set_cell(i, cell_id()); });
		}
		DCON_RELEASE_INLINE internal::const_iterator_cell_foreach_local_locations_as_cell_generator cell_get_local_locations(cell_id id) const {
			return internal::const_iterator_cell_foreach_local_locations_as_cell_generator(*this, id);
		}
		DCON_RELEASE_INLINE internal::iterator_cell_foreach_local_locations_as_cell_generator cell_get_local_locations(cell_id id) {
			return internal::iterator_cell_foreach_local_locations_as_cell_generator(*this, id);
		}
		template<typename T>
		DCON_RELEASE_INLINE void cell_for_each_local_locations(cell_id id, T&& func) const {
			if(bool(id)) {
				auto vrange = dcon::get_range(local_locations.cell_storage, local_locations.m_array_cell.vptr()[id.index()]);
				std::for_each(vrange.first, vrange.second, func);
			}
		}
		DCON_RELEASE_INLINE std::pair<local_locations_id const*, local_locations_id const*> cell_range_of_local_locations(cell_id id) const {
			if(bool(id)) {
				auto vrange = dcon::get_range(local_locations.cell_storage, local_locations.m_array_cell.vptr()[id.index()]);
				return std::pair<local_locations_id const*, local_locations_id const*>(vrange.first, vrange.second);
			} else {
				return std::pair<local_locations_id const*, local_locations_id const*>(nullptr, nullptr);
			}
		}
		void cell_remove_all_local_locations(cell_id id) noexcept {
			auto rng = cell_range_of_local_locations_as_cell(id);
			dcon::local_vector<local_locations_id> temp(rng.first, rng.second);
			std::for_each(temp.begin(), temp.end(), [t = this](local_locations_id i) { t->local_locations_set_cell(i, cell_id()); });
		}
		DCON_RELEASE_INLINE bool cell_is_valid(cell_id id) const noexcept {
			return bool(id) && uint32_t(id.index()) < cell.size_used;
		}
		
		uint32_t cell_size() const noexcept { return cell.size_used; }

		//
		// Functions for local_locations:
		//
		DCON_RELEASE_INLINE cell_id local_locations_get_cell(local_locations_id id) const noexcept {
			return local_locations.m_cell.vptr()[id.index()];
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::value_to_vector_type<cell_id> local_locations_get_cell(ve::contiguous_tags<local_locations_id> id) const noexcept {
			return ve::load(id, local_locations.m_cell.vptr());
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<cell_id> local_locations_get_cell(ve::partial_contiguous_tags<local_locations_id> id) const noexcept {
			return ve::load(id, local_locations.m_cell.vptr());
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<cell_id> local_locations_get_cell(ve::tagged_vector<local_locations_id> id) const noexcept {
			return ve::load(id, local_locations.m_cell.vptr());
		}
		#endif
		private:
		void internal_local_locations_set_cell(local_locations_id id, cell_id value) noexcept {
			if(auto old_value = local_locations.m_cell.vptr()[id.index()]; bool(old_value)) {
				auto& vref = local_locations.m_array_cell.vptr()[old_value.index()];
				dcon::remove_unique_item(local_locations.cell_storage, vref, id);
			}
			if(bool(value)) {
				dcon::push_back(local_locations.cell_storage, local_locations.m_array_cell.vptr()[value.index()], id);
			}
			local_locations.m_cell.vptr()[id.index()] = value;
		}
		public:
		void local_locations_set_cell(local_locations_id id, cell_id value) noexcept {
			if(!bool(value)) {
				delete_local_locations(id);
				return;
			}
			internal_local_locations_set_cell(id, value);
		}
		bool local_locations_try_set_cell(local_locations_id id, cell_id value) noexcept {
			if(!bool(value)) {
				return false;
			}
			internal_local_locations_set_cell(id, value);
			return true;
		}
		DCON_RELEASE_INLINE location_id local_locations_get_location(local_locations_id id) const noexcept {
			return location_id(location_id::value_base_t(id.index()));
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::contiguous_tags<location_id> local_locations_get_location(ve::contiguous_tags<local_locations_id> id) const noexcept {
			return ve::contiguous_tags<location_id>(id.value);
		}
		DCON_RELEASE_INLINE ve::partial_contiguous_tags<location_id> local_locations_get_location(ve::partial_contiguous_tags<local_locations_id> id) const noexcept {
			return ve::partial_contiguous_tags<location_id>(id.value, id.subcount);
		}
		DCON_RELEASE_INLINE ve::tagged_vector<location_id> local_locations_get_location(ve::tagged_vector<local_locations_id> id) const noexcept {
			return ve::tagged_vector<location_id>(id, std::true_type{});
		}
		#endif
		private:
		void internal_local_locations_set_location(local_locations_id id, location_id value) noexcept {
			if(bool(value)) {
				delete_local_locations( local_locations_id(local_locations_id::value_base_t(value.index())) );
				internal_move_relationship_local_locations(id, local_locations_id(local_locations_id::value_base_t(value.index())) );
			}
		}
		public:
		void local_locations_set_location(local_locations_id id, location_id value) noexcept {
			if(bool(value)) {
				delete_local_locations( local_locations_id(local_locations_id::value_base_t(value.index())) );
				internal_move_relationship_local_locations(id, local_locations_id(local_locations_id::value_base_t(value.index())) );
			} else {
				delete_local_locations(id);
			}
		}
		bool local_locations_try_set_location(local_locations_id id, location_id value) noexcept {
			if(bool(value)) {
				if(local_locations_is_valid( local_locations_id(local_locations_id::value_base_t(value.index())) )) return false;
				internal_move_relationship_local_locations(id, local_locations_id(local_locations_id::value_base_t(value.index())) );
				return true;
			} else {
				return false;
			}
		}
		DCON_RELEASE_INLINE bool local_locations_is_valid(local_locations_id id) const noexcept {
			return bool(id) && uint32_t(id.index()) < location.size_used && location_is_valid(location_id(location_id::value_base_t(id.index()))) && (bool(local_locations.m_cell.vptr()[id.index()]) || false);
		}
		
		uint32_t local_locations_size() const noexcept { return location.size_used; }

		//
		// Functions for character_position:
		//
		DCON_RELEASE_INLINE location_id character_position_get_location(character_position_id id) const noexcept {
			return location_id(location_id::value_base_t(id.index()));
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::contiguous_tags<location_id> character_position_get_location(ve::contiguous_tags<character_position_id> id) const noexcept {
			return ve::contiguous_tags<location_id>(id.value);
		}
		DCON_RELEASE_INLINE ve::partial_contiguous_tags<location_id> character_position_get_location(ve::partial_contiguous_tags<character_position_id> id) const noexcept {
			return ve::partial_contiguous_tags<location_id>(id.value, id.subcount);
		}
		DCON_RELEASE_INLINE ve::tagged_vector<location_id> character_position_get_location(ve::tagged_vector<character_position_id> id) const noexcept {
			return ve::tagged_vector<location_id>(id, std::true_type{});
		}
		#endif
		private:
		void internal_character_position_set_location(character_position_id id, location_id value) noexcept {
			if(bool(value)) {
				delete_character_position( character_position_id(character_position_id::value_base_t(value.index())) );
				internal_move_relationship_character_position(id, character_position_id(character_position_id::value_base_t(value.index())) );
			}
		}
		public:
		void character_position_set_location(character_position_id id, location_id value) noexcept {
			if(bool(value)) {
				delete_character_position( character_position_id(character_position_id::value_base_t(value.index())) );
				internal_move_relationship_character_position(id, character_position_id(character_position_id::value_base_t(value.index())) );
			} else {
				delete_character_position(id);
			}
		}
		bool character_position_try_set_location(character_position_id id, location_id value) noexcept {
			if(bool(value)) {
				if(character_position_is_valid( character_position_id(character_position_id::value_base_t(value.index())) )) return false;
				internal_move_relationship_character_position(id, character_position_id(character_position_id::value_base_t(value.index())) );
				return true;
			} else {
				return false;
			}
		}
		DCON_RELEASE_INLINE character_id character_position_get_character(character_position_id id) const noexcept {
			return character_position.m_character.vptr()[id.index()];
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::value_to_vector_type<character_id> character_position_get_character(ve::contiguous_tags<character_position_id> id) const noexcept {
			return ve::load(id, character_position.m_character.vptr());
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<character_id> character_position_get_character(ve::partial_contiguous_tags<character_position_id> id) const noexcept {
			return ve::load(id, character_position.m_character.vptr());
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<character_id> character_position_get_character(ve::tagged_vector<character_position_id> id) const noexcept {
			return ve::load(id, character_position.m_character.vptr());
		}
		#endif
		private:
		void internal_character_position_set_character(character_position_id id, character_id value) noexcept {
			if(auto old_value = character_position.m_character.vptr()[id.index()]; bool(old_value)) {
				auto& vref = character_position.m_array_character.vptr()[old_value.index()];
				dcon::remove_unique_item(character_position.character_storage, vref, id);
			}
			if(bool(value)) {
				dcon::push_back(character_position.character_storage, character_position.m_array_character.vptr()[value.index()], id);
			}
			character_position.m_character.vptr()[id.index()] = value;
		}
		public:
		void character_position_set_character(character_position_id id, character_id value) noexcept {
			if(!bool(value)) {
				delete_character_position(id);
				return;
			}
			internal_character_position_set_character(id, value);
		}
		bool character_position_try_set_character(character_position_id id, character_id value) noexcept {
			if(!bool(value)) {
				return false;
			}
			internal_character_position_set_character(id, value);
			return true;
		}
		DCON_RELEASE_INLINE bool character_position_is_valid(character_position_id id) const noexcept {
			return bool(id) && uint32_t(id.index()) < location.size_used && location_is_valid(location_id(location_id::value_base_t(id.index()))) && (bool(character_position.m_character.vptr()[id.index()]) || false);
		}
		
		uint32_t character_position_size() const noexcept { return location.size_used; }

		//
		// Functions for owned_character:
		//
		DCON_RELEASE_INLINE user_id owned_character_get_user(owned_character_id id) const noexcept {
			return user_id(user_id::value_base_t(id.index()));
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::contiguous_tags<user_id> owned_character_get_user(ve::contiguous_tags<owned_character_id> id) const noexcept {
			return ve::contiguous_tags<user_id>(id.value);
		}
		DCON_RELEASE_INLINE ve::partial_contiguous_tags<user_id> owned_character_get_user(ve::partial_contiguous_tags<owned_character_id> id) const noexcept {
			return ve::partial_contiguous_tags<user_id>(id.value, id.subcount);
		}
		DCON_RELEASE_INLINE ve::tagged_vector<user_id> owned_character_get_user(ve::tagged_vector<owned_character_id> id) const noexcept {
			return ve::tagged_vector<user_id>(id, std::true_type{});
		}
		#endif
		private:
		void internal_owned_character_set_user(owned_character_id id, user_id value) noexcept {
			if(bool(value)) {
				delete_owned_character( owned_character_id(owned_character_id::value_base_t(value.index())) );
				internal_move_relationship_owned_character(id, owned_character_id(owned_character_id::value_base_t(value.index())) );
			}
		}
		public:
		void owned_character_set_user(owned_character_id id, user_id value) noexcept {
			if(bool(value)) {
				delete_owned_character( owned_character_id(owned_character_id::value_base_t(value.index())) );
				internal_move_relationship_owned_character(id, owned_character_id(owned_character_id::value_base_t(value.index())) );
			} else {
				delete_owned_character(id);
			}
		}
		bool owned_character_try_set_user(owned_character_id id, user_id value) noexcept {
			if(bool(value)) {
				if(owned_character_is_valid( owned_character_id(owned_character_id::value_base_t(value.index())) )) return false;
				internal_move_relationship_owned_character(id, owned_character_id(owned_character_id::value_base_t(value.index())) );
				return true;
			} else {
				return false;
			}
		}
		DCON_RELEASE_INLINE character_id owned_character_get_character(owned_character_id id) const noexcept {
			return owned_character.m_character.vptr()[id.index()];
		}
		#ifndef DCON_NO_VE
		DCON_RELEASE_INLINE ve::value_to_vector_type<character_id> owned_character_get_character(ve::contiguous_tags<owned_character_id> id) const noexcept {
			return ve::load(id, owned_character.m_character.vptr());
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<character_id> owned_character_get_character(ve::partial_contiguous_tags<owned_character_id> id) const noexcept {
			return ve::load(id, owned_character.m_character.vptr());
		}
		DCON_RELEASE_INLINE ve::value_to_vector_type<character_id> owned_character_get_character(ve::tagged_vector<owned_character_id> id) const noexcept {
			return ve::load(id, owned_character.m_character.vptr());
		}
		#endif
		private:
		void internal_owned_character_set_character(owned_character_id id, character_id value) noexcept {
			if(auto old_value = owned_character.m_character.vptr()[id.index()]; bool(old_value)) {
				owned_character.m_link_back_character.vptr()[old_value.index()] = owned_character_id();
			}
			if(bool(value)) {
				if(auto old_rel = owned_character.m_link_back_character.vptr()[value.index()]; bool(old_rel)) {
					delete_owned_character(old_rel);
				}
				owned_character.m_link_back_character.vptr()[value.index()] = id;
			}
			owned_character.m_character.vptr()[id.index()] = value;
		}
		public:
		void owned_character_set_character(owned_character_id id, character_id value) noexcept {
			if(auto old_value = owned_character.m_character.vptr()[id.index()]; bool(old_value)) {
				owned_character.m_link_back_character.vptr()[old_value.index()] = owned_character_id();
			}
			if(bool(value)) {
				if(auto old_rel = owned_character.m_link_back_character.vptr()[value.index()]; bool(old_rel)) {
					delete_owned_character(old_rel);
				}
				owned_character.m_link_back_character.vptr()[value.index()] = id;
				owned_character.m_character.vptr()[id.index()] = value;
			} else {
				delete_owned_character(id);
			}
		}
		bool owned_character_try_set_character(owned_character_id id, character_id value) noexcept {
			if(!bool(value)) return false;
			if(bool(value)) {
				if(auto old_rel = owned_character.m_link_back_character.vptr()[value.index()]; bool(old_rel)) {
					return false;
				}
				owned_character.m_link_back_character.vptr()[value.index()] = id;
			}
			if(auto old_value = owned_character.m_character.vptr()[id.index()]; bool(old_value)) {
				owned_character.m_link_back_character.vptr()[old_value.index()] = owned_character_id();
			}
			owned_character.m_character.vptr()[id.index()] = value;
			return true;
		}
		DCON_RELEASE_INLINE bool owned_character_is_valid(owned_character_id id) const noexcept {
			return bool(id) && uint32_t(id.index()) < user.size_used && user_is_valid(user_id(user_id::value_base_t(id.index()))) && (bool(owned_character.m_character.vptr()[id.index()]) || false);
		}
		
		uint32_t owned_character_size() const noexcept { return user.size_used; }



		//
		// container pop_back for user
		//
		void pop_back_user() {
			if(user.size_used == 0) return;
			user_id id_removed(user_id::value_base_t(user.size_used - 1));
			delete_owned_character(owned_character_id(owned_character_id::value_base_t(id_removed.index())));
			user.m_login.zero_at(id_removed.index());
			user.m_password_hash.zero_at(id_removed.index());
			dcon::bit_vector_set(user.m_is_tester.vptr(), id_removed.index(), false);
			dcon::bit_vector_set(user.m_is_admin.vptr(), id_removed.index(), false);
			user.m_session.zero_at(id_removed.index());
			--user.size_used;
		}
		
		//
		// container resize for user
		//
		void user_resize(uint32_t new_size) {
			#ifndef DCON_USE_EXCEPTIONS
			if(new_size > 10000) std::abort();
			#else
			if(new_size > 10000) throw dcon::out_of_space{};
			#endif
			const uint32_t old_size = user.size_used;
			if(new_size < old_size) {
				for(int32_t s = 0; s < int32_t(user.m_login.size); ++s) {
					std::fill_n(user.m_login.vptr(s) + new_size, old_size - new_size, uint8_t{});
				}
				for(int32_t s = 0; s < int32_t(user.m_password_hash.size); ++s) {
					std::fill_n(user.m_password_hash.vptr(s) + new_size, old_size - new_size, int32_t{});
				}
				for(uint32_t s = new_size; s < 8 * (((new_size + 7) / 8)); ++s) {
					dcon::bit_vector_set(user.m_is_tester.vptr(), s, false);
				}
				std::fill_n(user.m_is_tester.vptr() + (new_size + 7) / 8, (new_size + old_size - new_size + 7) / 8 - (new_size + 7) / 8, dcon::bitfield_type{0});
				for(uint32_t s = new_size; s < 8 * (((new_size + 7) / 8)); ++s) {
					dcon::bit_vector_set(user.m_is_admin.vptr(), s, false);
				}
				std::fill_n(user.m_is_admin.vptr() + (new_size + 7) / 8, (new_size + old_size - new_size + 7) / 8 - (new_size + 7) / 8, dcon::bitfield_type{0});
				for(int32_t s = 0; s < int32_t(user.m_session.size); ++s) {
					std::fill_n(user.m_session.vptr(s) + new_size, old_size - new_size, int8_t{});
				}
				owned_character_resize(std::min(new_size, user.size_used));
			} else if(new_size > old_size) {
			}
			user.size_used = new_size;
		}
		
		//
		// container create for user
		//
		user_id create_user() {
			user_id new_id(user_id::value_base_t(user.size_used));
			#ifndef DCON_USE_EXCEPTIONS
			if(user.size_used >= 10000) std::abort();
			#else
			if(user.size_used >= 10000) throw dcon::out_of_space{};
			#endif
			++user.size_used;
			return new_id;
		}
		
		//
		// container delete for character
		//
		void delete_character(character_id id_removed) {
			#ifndef NDEBUG
			assert(id_removed.index() >= 0);
			assert(character.m__index.vptr()[id_removed.index()] == id_removed);
			#endif
			character.m__index.vptr()[id_removed.index()] = character.first_free;
			character.first_free = id_removed;
			if(int32_t(character.size_used) - 1 == id_removed.index()) {
				for( ; character.size_used > 0 && character.m__index.vptr()[character.size_used - 1] != character_id(character_id::value_base_t(character.size_used - 1));  --character.size_used) ;
			}
			character_remove_all_character_position_as_character(id_removed);
			character_remove_owned_character_as_character(id_removed);
			character.m_name.zero_at(id_removed.index());
		}
		
		//
		// container create for character
		//
		character_id create_character() {
			#ifndef DCON_USE_EXCEPTIONS
			if(!bool(character.first_free)) std::abort();
			#else
			if(!bool(character.first_free)) throw dcon::out_of_space{};
			#endif
			character_id new_id = character.first_free;
			character.first_free = character.m__index.vptr()[character.first_free.index()];
			character.m__index.vptr()[new_id.index()] = new_id;
			character.size_used = std::max(character.size_used, uint32_t(new_id.index() + 1));
			return new_id;
		}
		
		//
		// container resize for character
		//
		void character_resize(uint32_t new_size) {
			#ifndef DCON_USE_EXCEPTIONS
			if(new_size > 100000) std::abort();
			#else
			if(new_size > 100000) throw dcon::out_of_space{};
			#endif
			const uint32_t old_size = character.size_used;
			if(new_size < old_size) {
				character.first_free = character_id();
				int32_t i = int32_t(100000 - 1);
				for(; i >= int32_t(new_size); --i) {
					character.m__index.vptr()[i] = character.first_free;
					character.first_free = character_id(character_id::value_base_t(i));
				}
				for(; i >= 0; --i) {
					if(character.m__index.vptr()[i] != character_id(character_id::value_base_t(i))) {
						character.m__index.vptr()[i] = character.first_free;
						character.first_free = character_id(character_id::value_base_t(i));
					}
				}
				for(int32_t s = 0; s < int32_t(character.m_name.size); ++s) {
					std::fill_n(character.m_name.vptr(s) + new_size, old_size - new_size, uint8_t{});
				}
				character_position_resize(0);
				owned_character_resize(0);
			} else if(new_size > old_size) {
				character.first_free = character_id();
				int32_t i = int32_t(100000 - 1);
				for(; i >= int32_t(old_size); --i) {
					character.m__index.vptr()[i] = character.first_free;
					character.first_free = character_id(character_id::value_base_t(i));
				}
				for(; i >= 0; --i) {
					if(character.m__index.vptr()[i] != character_id(character_id::value_base_t(i))) {
						character.m__index.vptr()[i] = character.first_free;
						character.first_free = character_id(character_id::value_base_t(i));
					}
				}
			}
			character.size_used = new_size;
		}
		
		//
		// container pop_back for location
		//
		void pop_back_location() {
			if(location.size_used == 0) return;
			location_id id_removed(location_id::value_base_t(location.size_used - 1));
			delete_local_locations(local_locations_id(local_locations_id::value_base_t(id_removed.index())));
			delete_character_position(character_position_id(character_position_id::value_base_t(id_removed.index())));
			--location.size_used;
		}
		
		//
		// container resize for location
		//
		void location_resize(uint32_t new_size) {
			#ifndef DCON_USE_EXCEPTIONS
			if(new_size > 5000000) std::abort();
			#else
			if(new_size > 5000000) throw dcon::out_of_space{};
			#endif
			const uint32_t old_size = location.size_used;
			if(new_size < old_size) {
				local_locations_resize(std::min(new_size, location.size_used));
				character_position_resize(std::min(new_size, location.size_used));
			} else if(new_size > old_size) {
			}
			location.size_used = new_size;
		}
		
		//
		// container create for location
		//
		location_id create_location() {
			location_id new_id(location_id::value_base_t(location.size_used));
			#ifndef DCON_USE_EXCEPTIONS
			if(location.size_used >= 5000000) std::abort();
			#else
			if(location.size_used >= 5000000) throw dcon::out_of_space{};
			#endif
			++location.size_used;
			return new_id;
		}
		
		//
		// container pop_back for cell
		//
		void pop_back_cell() {
			if(cell.size_used == 0) return;
			cell_id id_removed(cell_id::value_base_t(cell.size_used - 1));
			cell_remove_all_local_locations_as_cell(id_removed);
			cell.m_rat_smell.vptr()[id_removed.index()] = float{};
			--cell.size_used;
		}
		
		//
		// container resize for cell
		//
		void cell_resize(uint32_t new_size) {
			#ifndef DCON_USE_EXCEPTIONS
			if(new_size > 1000000) std::abort();
			#else
			if(new_size > 1000000) throw dcon::out_of_space{};
			#endif
			const uint32_t old_size = cell.size_used;
			if(new_size < old_size) {
				std::fill_n(cell.m_rat_smell.vptr() + new_size, old_size - new_size, float{});
				local_locations_resize(0);
			} else if(new_size > old_size) {
			}
			cell.size_used = new_size;
		}
		
		//
		// container create for cell
		//
		cell_id create_cell() {
			cell_id new_id(cell_id::value_base_t(cell.size_used));
			#ifndef DCON_USE_EXCEPTIONS
			if(cell.size_used >= 1000000) std::abort();
			#else
			if(cell.size_used >= 1000000) throw dcon::out_of_space{};
			#endif
			++cell.size_used;
			return new_id;
		}
		
		//
		// container resize for local_locations
		//
		void local_locations_resize(uint32_t new_size) {
			#ifndef DCON_USE_EXCEPTIONS
			if(new_size > 5000000) std::abort();
			#else
			if(new_size > 5000000) throw dcon::out_of_space{};
			#endif
			const uint32_t old_size = location.size_used;
			if(new_size < old_size) {
				std::fill_n(local_locations.m_cell.vptr() + 0, old_size, cell_id{});
				std::for_each(local_locations.m_array_cell.vptr() + 0, local_locations.m_array_cell.vptr() + 0 + cell.size_used, [t = this](dcon::stable_mk_2_tag& i){ t->local_locations.cell_storage.release(i); });
			} else if(new_size > old_size) {
			}
		}
		
		//
		// container delete for local_locations
		//
		void delete_local_locations(local_locations_id id_removed) {
			#ifndef NDEBUG
			assert(id_removed.index() >= 0);
			#endif
			internal_local_locations_set_cell(id_removed, cell_id());
		}
		
		//
		// container pop_back for local_locations
		//
		void pop_back_local_locations() {
			if(location.size_used == 0) return;
			local_locations_id id_removed(local_locations_id::value_base_t(location.size_used - 1));
			internal_local_locations_set_cell(id_removed, cell_id());
		}
		
		private:
		//
		// container move relationship for local_locations
		//
		void internal_move_relationship_local_locations(local_locations_id last_id, local_locations_id id_removed) {
			internal_local_locations_set_cell(id_removed, cell_id());
			if(auto tmp = local_locations.m_cell.vptr()[last_id.index()]; bool(tmp)) {
				dcon::replace_unique_item(local_locations.cell_storage, local_locations.m_array_cell.vptr()[tmp.index()], last_id, id_removed);
			}
			local_locations.m_cell.vptr()[id_removed.index()] = std::move(local_locations.m_cell.vptr()[last_id.index()]);
			local_locations.m_cell.vptr()[last_id.index()] = cell_id();
		}
		
		public:
		//
		// container try create relationship for local_locations
		//
		local_locations_id try_create_local_locations(cell_id cell_p, location_id location_p) {
			if(!bool(cell_p)) return local_locations_id();
			if(!bool(location_p)) return local_locations_id();
			if(local_locations_is_valid(local_locations_id(local_locations_id::value_base_t(location_p.index())))) return local_locations_id();
			local_locations_id new_id(local_locations_id::value_base_t(location_p.index()));
			if(location.size_used < uint32_t(location_p.value)) location_resize(uint32_t(location_p.value));
			internal_local_locations_set_cell(new_id, cell_p);
			return new_id;
		}
		
		//
		// container force create relationship for local_locations
		//
		local_locations_id force_create_local_locations(cell_id cell_p, location_id location_p) {
			local_locations_id new_id(local_locations_id::value_base_t(location_p.index()));
			if(location.size_used < uint32_t(location_p.value)) location_resize(uint32_t(location_p.value));
			internal_local_locations_set_cell(new_id, cell_p);
			return new_id;
		}
		
		//
		// container resize for character_position
		//
		void character_position_resize(uint32_t new_size) {
			#ifndef DCON_USE_EXCEPTIONS
			if(new_size > 5000000) std::abort();
			#else
			if(new_size > 5000000) throw dcon::out_of_space{};
			#endif
			const uint32_t old_size = location.size_used;
			if(new_size < old_size) {
				std::fill_n(character_position.m_character.vptr() + 0, old_size, character_id{});
				std::for_each(character_position.m_array_character.vptr() + 0, character_position.m_array_character.vptr() + 0 + character.size_used, [t = this](dcon::stable_mk_2_tag& i){ t->character_position.character_storage.release(i); });
			} else if(new_size > old_size) {
			}
		}
		
		//
		// container delete for character_position
		//
		void delete_character_position(character_position_id id_removed) {
			#ifndef NDEBUG
			assert(id_removed.index() >= 0);
			#endif
			internal_character_position_set_character(id_removed, character_id());
		}
		
		//
		// container pop_back for character_position
		//
		void pop_back_character_position() {
			if(location.size_used == 0) return;
			character_position_id id_removed(character_position_id::value_base_t(location.size_used - 1));
			internal_character_position_set_character(id_removed, character_id());
		}
		
		private:
		//
		// container move relationship for character_position
		//
		void internal_move_relationship_character_position(character_position_id last_id, character_position_id id_removed) {
			internal_character_position_set_character(id_removed, character_id());
			if(auto tmp = character_position.m_character.vptr()[last_id.index()]; bool(tmp)) {
				dcon::replace_unique_item(character_position.character_storage, character_position.m_array_character.vptr()[tmp.index()], last_id, id_removed);
			}
			character_position.m_character.vptr()[id_removed.index()] = std::move(character_position.m_character.vptr()[last_id.index()]);
			character_position.m_character.vptr()[last_id.index()] = character_id();
		}
		
		public:
		//
		// container try create relationship for character_position
		//
		character_position_id try_create_character_position(location_id location_p, character_id character_p) {
			if(!bool(location_p)) return character_position_id();
			if(character_position_is_valid(character_position_id(character_position_id::value_base_t(location_p.index())))) return character_position_id();
			if(!bool(character_p)) return character_position_id();
			character_position_id new_id(character_position_id::value_base_t(location_p.index()));
			if(location.size_used < uint32_t(location_p.value)) location_resize(uint32_t(location_p.value));
			internal_character_position_set_character(new_id, character_p);
			return new_id;
		}
		
		//
		// container force create relationship for character_position
		//
		character_position_id force_create_character_position(location_id location_p, character_id character_p) {
			character_position_id new_id(character_position_id::value_base_t(location_p.index()));
			if(location.size_used < uint32_t(location_p.value)) location_resize(uint32_t(location_p.value));
			internal_character_position_set_character(new_id, character_p);
			return new_id;
		}
		
		//
		// container resize for owned_character
		//
		void owned_character_resize(uint32_t new_size) {
			#ifndef DCON_USE_EXCEPTIONS
			if(new_size > 10000) std::abort();
			#else
			if(new_size > 10000) throw dcon::out_of_space{};
			#endif
			const uint32_t old_size = user.size_used;
			if(new_size < old_size) {
				std::fill_n(owned_character.m_character.vptr() + 0, old_size, character_id{});
				std::fill_n(owned_character.m_link_back_character.vptr() + 0, character.size_used, owned_character_id{});
			} else if(new_size > old_size) {
			}
		}
		
		//
		// container delete for owned_character
		//
		void delete_owned_character(owned_character_id id_removed) {
			#ifndef NDEBUG
			assert(id_removed.index() >= 0);
			#endif
			internal_owned_character_set_character(id_removed, character_id());
		}
		
		//
		// container pop_back for owned_character
		//
		void pop_back_owned_character() {
			if(user.size_used == 0) return;
			owned_character_id id_removed(owned_character_id::value_base_t(user.size_used - 1));
			internal_owned_character_set_character(id_removed, character_id());
		}
		
		private:
		//
		// container move relationship for owned_character
		//
		void internal_move_relationship_owned_character(owned_character_id last_id, owned_character_id id_removed) {
			internal_owned_character_set_character(id_removed, character_id());
			if(auto related = owned_character.m_character.vptr()[last_id.index()]; bool(related)) {
				owned_character.m_link_back_character.vptr()[related.index()] = id_removed;
			}
			owned_character.m_character.vptr()[id_removed.index()] = std::move(owned_character.m_character.vptr()[last_id.index()]);
			owned_character.m_character.vptr()[last_id.index()] = character_id();
		}
		
		public:
		//
		// container try create relationship for owned_character
		//
		owned_character_id try_create_owned_character(user_id user_p, character_id character_p) {
			if(!bool(user_p)) return owned_character_id();
			if(owned_character_is_valid(owned_character_id(owned_character_id::value_base_t(user_p.index())))) return owned_character_id();
			if(!bool(character_p)) return owned_character_id();
			if(bool(character_p) && bool(owned_character.m_link_back_character.vptr()[character_p.index()])) return owned_character_id();
			owned_character_id new_id(owned_character_id::value_base_t(user_p.index()));
			if(user.size_used < uint32_t(user_p.value)) user_resize(uint32_t(user_p.value));
			internal_owned_character_set_character(new_id, character_p);
			return new_id;
		}
		
		//
		// container force create relationship for owned_character
		//
		owned_character_id force_create_owned_character(user_id user_p, character_id character_p) {
			owned_character_id new_id(owned_character_id::value_base_t(user_p.index()));
			if(user.size_used < uint32_t(user_p.value)) user_resize(uint32_t(user_p.value));
			internal_owned_character_set_character(new_id, character_p);
			return new_id;
		}
		
		template <typename T>
		DCON_RELEASE_INLINE void for_each_user(T&& func) {
			for(uint32_t i = 0; i < user.size_used; ++i) {
				user_id tmp = user_id(user_id::value_base_t(i));
				func(tmp);
			}
		}
		friend internal::const_object_iterator_user;
		friend internal::object_iterator_user;
		struct {
			internal::object_iterator_user begin() {
				data_container* container = reinterpret_cast<data_container*>(reinterpret_cast<std::byte*>(this) - offsetof(data_container, in_user));
				return internal::object_iterator_user(*container, uint32_t(0));
			}
			internal::object_iterator_user end() {
				data_container* container = reinterpret_cast<data_container*>(reinterpret_cast<std::byte*>(this) - offsetof(data_container, in_user));
				return internal::object_iterator_user(*container, container->user_size());
			}
			internal::const_object_iterator_user begin() const {
				data_container const* container = reinterpret_cast<data_container const*>(reinterpret_cast<std::byte const*>(this) - offsetof(data_container, in_user));
				return internal::const_object_iterator_user(*container, uint32_t(0));
			}
			internal::const_object_iterator_user end() const {
				data_container const* container = reinterpret_cast<data_container const*>(reinterpret_cast<std::byte const*>(this) - offsetof(data_container, in_user));
				return internal::const_object_iterator_user(*container, container->user_size());
			}
		}  in_user ;
		
		template <typename T>
		DCON_RELEASE_INLINE void for_each_character(T&& func) {
			for(uint32_t i = 0; i < character.size_used; ++i) {
				character_id tmp = character_id(character_id::value_base_t(i));
				if(character.m__index.vptr()[tmp.index()] == tmp) func(tmp);
			}
		}
		friend internal::const_object_iterator_character;
		friend internal::object_iterator_character;
		struct {
			internal::object_iterator_character begin() {
				data_container* container = reinterpret_cast<data_container*>(reinterpret_cast<std::byte*>(this) - offsetof(data_container, in_character));
				return internal::object_iterator_character(*container, uint32_t(0));
			}
			internal::object_iterator_character end() {
				data_container* container = reinterpret_cast<data_container*>(reinterpret_cast<std::byte*>(this) - offsetof(data_container, in_character));
				return internal::object_iterator_character(*container, container->character_size());
			}
			internal::const_object_iterator_character begin() const {
				data_container const* container = reinterpret_cast<data_container const*>(reinterpret_cast<std::byte const*>(this) - offsetof(data_container, in_character));
				return internal::const_object_iterator_character(*container, uint32_t(0));
			}
			internal::const_object_iterator_character end() const {
				data_container const* container = reinterpret_cast<data_container const*>(reinterpret_cast<std::byte const*>(this) - offsetof(data_container, in_character));
				return internal::const_object_iterator_character(*container, container->character_size());
			}
		}  in_character ;
		
		template <typename T>
		DCON_RELEASE_INLINE void for_each_location(T&& func) {
			for(uint32_t i = 0; i < location.size_used; ++i) {
				location_id tmp = location_id(location_id::value_base_t(i));
				func(tmp);
			}
		}
		friend internal::const_object_iterator_location;
		friend internal::object_iterator_location;
		struct {
			internal::object_iterator_location begin() {
				data_container* container = reinterpret_cast<data_container*>(reinterpret_cast<std::byte*>(this) - offsetof(data_container, in_location));
				return internal::object_iterator_location(*container, uint32_t(0));
			}
			internal::object_iterator_location end() {
				data_container* container = reinterpret_cast<data_container*>(reinterpret_cast<std::byte*>(this) - offsetof(data_container, in_location));
				return internal::object_iterator_location(*container, container->location_size());
			}
			internal::const_object_iterator_location begin() const {
				data_container const* container = reinterpret_cast<data_container const*>(reinterpret_cast<std::byte const*>(this) - offsetof(data_container, in_location));
				return internal::const_object_iterator_location(*container, uint32_t(0));
			}
			internal::const_object_iterator_location end() const {
				data_container const* container = reinterpret_cast<data_container const*>(reinterpret_cast<std::byte const*>(this) - offsetof(data_container, in_location));
				return internal::const_object_iterator_location(*container, container->location_size());
			}
		}  in_location ;
		
		template <typename T>
		DCON_RELEASE_INLINE void for_each_cell(T&& func) {
			for(uint32_t i = 0; i < cell.size_used; ++i) {
				cell_id tmp = cell_id(cell_id::value_base_t(i));
				func(tmp);
			}
		}
		friend internal::const_object_iterator_cell;
		friend internal::object_iterator_cell;
		struct {
			internal::object_iterator_cell begin() {
				data_container* container = reinterpret_cast<data_container*>(reinterpret_cast<std::byte*>(this) - offsetof(data_container, in_cell));
				return internal::object_iterator_cell(*container, uint32_t(0));
			}
			internal::object_iterator_cell end() {
				data_container* container = reinterpret_cast<data_container*>(reinterpret_cast<std::byte*>(this) - offsetof(data_container, in_cell));
				return internal::object_iterator_cell(*container, container->cell_size());
			}
			internal::const_object_iterator_cell begin() const {
				data_container const* container = reinterpret_cast<data_container const*>(reinterpret_cast<std::byte const*>(this) - offsetof(data_container, in_cell));
				return internal::const_object_iterator_cell(*container, uint32_t(0));
			}
			internal::const_object_iterator_cell end() const {
				data_container const* container = reinterpret_cast<data_container const*>(reinterpret_cast<std::byte const*>(this) - offsetof(data_container, in_cell));
				return internal::const_object_iterator_cell(*container, container->cell_size());
			}
		}  in_cell ;
		
		template <typename T>
		DCON_RELEASE_INLINE void for_each_local_locations(T&& func) {
			for(uint32_t i = 0; i < location.size_used; ++i) {
				local_locations_id tmp = local_locations_id(local_locations_id::value_base_t(i));
				func(tmp);
			}
		}
		friend internal::const_object_iterator_local_locations;
		friend internal::object_iterator_local_locations;
		struct {
			internal::object_iterator_local_locations begin() {
				data_container* container = reinterpret_cast<data_container*>(reinterpret_cast<std::byte*>(this) - offsetof(data_container, in_local_locations));
				return internal::object_iterator_local_locations(*container, uint32_t(0));
			}
			internal::object_iterator_local_locations end() {
				data_container* container = reinterpret_cast<data_container*>(reinterpret_cast<std::byte*>(this) - offsetof(data_container, in_local_locations));
				return internal::object_iterator_local_locations(*container, container->local_locations_size());
			}
			internal::const_object_iterator_local_locations begin() const {
				data_container const* container = reinterpret_cast<data_container const*>(reinterpret_cast<std::byte const*>(this) - offsetof(data_container, in_local_locations));
				return internal::const_object_iterator_local_locations(*container, uint32_t(0));
			}
			internal::const_object_iterator_local_locations end() const {
				data_container const* container = reinterpret_cast<data_container const*>(reinterpret_cast<std::byte const*>(this) - offsetof(data_container, in_local_locations));
				return internal::const_object_iterator_local_locations(*container, container->local_locations_size());
			}
		}  in_local_locations ;
		
		template <typename T>
		DCON_RELEASE_INLINE void for_each_character_position(T&& func) {
			for(uint32_t i = 0; i < location.size_used; ++i) {
				character_position_id tmp = character_position_id(character_position_id::value_base_t(i));
				func(tmp);
			}
		}
		friend internal::const_object_iterator_character_position;
		friend internal::object_iterator_character_position;
		struct {
			internal::object_iterator_character_position begin() {
				data_container* container = reinterpret_cast<data_container*>(reinterpret_cast<std::byte*>(this) - offsetof(data_container, in_character_position));
				return internal::object_iterator_character_position(*container, uint32_t(0));
			}
			internal::object_iterator_character_position end() {
				data_container* container = reinterpret_cast<data_container*>(reinterpret_cast<std::byte*>(this) - offsetof(data_container, in_character_position));
				return internal::object_iterator_character_position(*container, container->character_position_size());
			}
			internal::const_object_iterator_character_position begin() const {
				data_container const* container = reinterpret_cast<data_container const*>(reinterpret_cast<std::byte const*>(this) - offsetof(data_container, in_character_position));
				return internal::const_object_iterator_character_position(*container, uint32_t(0));
			}
			internal::const_object_iterator_character_position end() const {
				data_container const* container = reinterpret_cast<data_container const*>(reinterpret_cast<std::byte const*>(this) - offsetof(data_container, in_character_position));
				return internal::const_object_iterator_character_position(*container, container->character_position_size());
			}
		}  in_character_position ;
		
		template <typename T>
		DCON_RELEASE_INLINE void for_each_owned_character(T&& func) {
			for(uint32_t i = 0; i < user.size_used; ++i) {
				owned_character_id tmp = owned_character_id(owned_character_id::value_base_t(i));
				func(tmp);
			}
		}
		friend internal::const_object_iterator_owned_character;
		friend internal::object_iterator_owned_character;
		struct {
			internal::object_iterator_owned_character begin() {
				data_container* container = reinterpret_cast<data_container*>(reinterpret_cast<std::byte*>(this) - offsetof(data_container, in_owned_character));
				return internal::object_iterator_owned_character(*container, uint32_t(0));
			}
			internal::object_iterator_owned_character end() {
				data_container* container = reinterpret_cast<data_container*>(reinterpret_cast<std::byte*>(this) - offsetof(data_container, in_owned_character));
				return internal::object_iterator_owned_character(*container, container->owned_character_size());
			}
			internal::const_object_iterator_owned_character begin() const {
				data_container const* container = reinterpret_cast<data_container const*>(reinterpret_cast<std::byte const*>(this) - offsetof(data_container, in_owned_character));
				return internal::const_object_iterator_owned_character(*container, uint32_t(0));
			}
			internal::const_object_iterator_owned_character end() const {
				data_container const* container = reinterpret_cast<data_container const*>(reinterpret_cast<std::byte const*>(this) - offsetof(data_container, in_owned_character));
				return internal::const_object_iterator_owned_character(*container, container->owned_character_size());
			}
		}  in_owned_character ;
		



		void reset() {
			local_locations_resize(0);
			character_position_resize(0);
			owned_character_resize(0);
			user_resize(0);
			character_resize(0);
			location_resize(0);
			cell_resize(0);
		}

		#ifndef DCON_NO_VE
		ve::vectorizable_buffer<float, user_id> user_make_vectorizable_float_buffer() const noexcept {
			return ve::vectorizable_buffer<float, user_id>(user.size_used);
		}
		ve::vectorizable_buffer<int32_t, user_id> user_make_vectorizable_int_buffer() const noexcept {
			return ve::vectorizable_buffer<int32_t, user_id>(user.size_used);
		}
		template<typename F>
		DCON_RELEASE_INLINE void execute_serial_over_user(F&& functor) {
			ve::execute_serial<user_id>(user.size_used, functor);
		}
#ifndef VE_NO_TBB
		template<typename F>
		DCON_RELEASE_INLINE void execute_parallel_over_user(F&& functor) {
			ve::execute_parallel_exact<user_id>(user.size_used, functor);
		}
#endif
		ve::vectorizable_buffer<float, character_id> character_make_vectorizable_float_buffer() const noexcept {
			return ve::vectorizable_buffer<float, character_id>(character.size_used);
		}
		ve::vectorizable_buffer<int32_t, character_id> character_make_vectorizable_int_buffer() const noexcept {
			return ve::vectorizable_buffer<int32_t, character_id>(character.size_used);
		}
		template<typename F>
		DCON_RELEASE_INLINE void execute_serial_over_character(F&& functor) {
			ve::execute_serial<character_id>(character.size_used, functor);
		}
#ifndef VE_NO_TBB
		template<typename F>
		DCON_RELEASE_INLINE void execute_parallel_over_character(F&& functor) {
			ve::execute_parallel_exact<character_id>(character.size_used, functor);
		}
#endif
		ve::vectorizable_buffer<float, location_id> location_make_vectorizable_float_buffer() const noexcept {
			return ve::vectorizable_buffer<float, location_id>(location.size_used);
		}
		ve::vectorizable_buffer<int32_t, location_id> location_make_vectorizable_int_buffer() const noexcept {
			return ve::vectorizable_buffer<int32_t, location_id>(location.size_used);
		}
		template<typename F>
		DCON_RELEASE_INLINE void execute_serial_over_location(F&& functor) {
			ve::execute_serial<location_id>(location.size_used, functor);
		}
#ifndef VE_NO_TBB
		template<typename F>
		DCON_RELEASE_INLINE void execute_parallel_over_location(F&& functor) {
			ve::execute_parallel_exact<location_id>(location.size_used, functor);
		}
#endif
		ve::vectorizable_buffer<float, cell_id> cell_make_vectorizable_float_buffer() const noexcept {
			return ve::vectorizable_buffer<float, cell_id>(cell.size_used);
		}
		ve::vectorizable_buffer<int32_t, cell_id> cell_make_vectorizable_int_buffer() const noexcept {
			return ve::vectorizable_buffer<int32_t, cell_id>(cell.size_used);
		}
		template<typename F>
		DCON_RELEASE_INLINE void execute_serial_over_cell(F&& functor) {
			ve::execute_serial<cell_id>(cell.size_used, functor);
		}
#ifndef VE_NO_TBB
		template<typename F>
		DCON_RELEASE_INLINE void execute_parallel_over_cell(F&& functor) {
			ve::execute_parallel_exact<cell_id>(cell.size_used, functor);
		}
#endif
		ve::vectorizable_buffer<float, local_locations_id> local_locations_make_vectorizable_float_buffer() const noexcept {
			return ve::vectorizable_buffer<float, local_locations_id>(location.size_used);
		}
		ve::vectorizable_buffer<int32_t, local_locations_id> local_locations_make_vectorizable_int_buffer() const noexcept {
			return ve::vectorizable_buffer<int32_t, local_locations_id>(location.size_used);
		}
		template<typename F>
		DCON_RELEASE_INLINE void execute_serial_over_local_locations(F&& functor) {
			ve::execute_serial<local_locations_id>(location.size_used, functor);
		}
#ifndef VE_NO_TBB
		template<typename F>
		DCON_RELEASE_INLINE void execute_parallel_over_local_locations(F&& functor) {
			ve::execute_parallel_exact<local_locations_id>(location.size_used, functor);
		}
#endif
		ve::vectorizable_buffer<float, character_position_id> character_position_make_vectorizable_float_buffer() const noexcept {
			return ve::vectorizable_buffer<float, character_position_id>(location.size_used);
		}
		ve::vectorizable_buffer<int32_t, character_position_id> character_position_make_vectorizable_int_buffer() const noexcept {
			return ve::vectorizable_buffer<int32_t, character_position_id>(location.size_used);
		}
		template<typename F>
		DCON_RELEASE_INLINE void execute_serial_over_character_position(F&& functor) {
			ve::execute_serial<character_position_id>(location.size_used, functor);
		}
#ifndef VE_NO_TBB
		template<typename F>
		DCON_RELEASE_INLINE void execute_parallel_over_character_position(F&& functor) {
			ve::execute_parallel_exact<character_position_id>(location.size_used, functor);
		}
#endif
		ve::vectorizable_buffer<float, owned_character_id> owned_character_make_vectorizable_float_buffer() const noexcept {
			return ve::vectorizable_buffer<float, owned_character_id>(user.size_used);
		}
		ve::vectorizable_buffer<int32_t, owned_character_id> owned_character_make_vectorizable_int_buffer() const noexcept {
			return ve::vectorizable_buffer<int32_t, owned_character_id>(user.size_used);
		}
		template<typename F>
		DCON_RELEASE_INLINE void execute_serial_over_owned_character(F&& functor) {
			ve::execute_serial<owned_character_id>(user.size_used, functor);
		}
#ifndef VE_NO_TBB
		template<typename F>
		DCON_RELEASE_INLINE void execute_parallel_over_owned_character(F&& functor) {
			ve::execute_parallel_exact<owned_character_id>(user.size_used, functor);
		}
#endif
		#endif

		load_record make_serialize_record_everything() const noexcept {
			load_record result;
			result.user = true;
			result.user_login = true;
			result.user_password_hash = true;
			result.user_is_tester = true;
			result.user_is_admin = true;
			result.user_session = true;
			result.character = true;
			result.character__index = true;
			result.character_name = true;
			result.location = true;
			result.cell = true;
			result.cell_rat_smell = true;
			result.local_locations = true;
			result.local_locations_cell = true;
			result.local_locations_location = true;
			result.character_position = true;
			result.character_position_location = true;
			result.character_position_character = true;
			result.owned_character = true;
			result.owned_character_user = true;
			result.owned_character_character = true;
			return result;
		}
		
		load_record serialize_entire_container_record() const noexcept {
			load_record result;
			result.user = true;
			result.user_login = true;
			result.user_password_hash = true;
			result.user_is_tester = true;
			result.user_is_admin = true;
			result.user_session = true;
			result.character = true;
			result.character__index = true;
			result.character_name = true;
			result.location = true;
			result.cell = true;
			result.cell_rat_smell = true;
			result.local_locations = true;
			result.local_locations_cell = true;
			result.local_locations_location = true;
			result.character_position = true;
			result.character_position_location = true;
			result.character_position_character = true;
			result.owned_character = true;
			result.owned_character_user = true;
			result.owned_character_character = true;
			return result;
		}
		
		//
		// calculate size (in bytes) required to serialize the desired objects, relationships, and properties
		//
		uint64_t serialize_size(load_record const& serialize_selection) const {
			uint64_t total_size = 0;
			if(serialize_selection.user) {
				dcon::record_header header(0, "uint32_t", "user", "$size");
				total_size += header.serialize_size();
				total_size += sizeof(uint32_t);
			}
			if(serialize_selection.user_login) {
				total_size += 8;
				total_size += sizeof(uint16_t);
				total_size += user.m_login.size * sizeof(uint8_t) * user.size_used;
				dcon::record_header iheader(0, "$array", "user", "login");
				total_size += iheader.serialize_size();
			}
			if(serialize_selection.user_password_hash) {
				total_size += 8;
				total_size += sizeof(uint16_t);
				total_size += user.m_password_hash.size * sizeof(int32_t) * user.size_used;
				dcon::record_header iheader(0, "$array", "user", "password_hash");
				total_size += iheader.serialize_size();
			}
			if(serialize_selection.user_is_tester) {
				dcon::record_header iheader(0, "bitfield", "user", "is_tester");
				total_size += iheader.serialize_size();
				total_size += (user.size_used + 7) / 8;
			}
			if(serialize_selection.user_is_admin) {
				dcon::record_header iheader(0, "bitfield", "user", "is_admin");
				total_size += iheader.serialize_size();
				total_size += (user.size_used + 7) / 8;
			}
			if(serialize_selection.user_session) {
				total_size += 7;
				total_size += sizeof(uint16_t);
				total_size += user.m_session.size * sizeof(int8_t) * user.size_used;
				dcon::record_header iheader(0, "$array", "user", "session");
				total_size += iheader.serialize_size();
			}
			if(serialize_selection.character) {
				dcon::record_header header(0, "uint32_t", "character", "$size");
				total_size += header.serialize_size();
				total_size += sizeof(uint32_t);
			}
			if(serialize_selection.character__index) {
				dcon::record_header iheader(0, "uint32_t", "character", "_index");
				total_size += iheader.serialize_size();
				total_size += sizeof(character_id) * character.size_used;
			}
			if(serialize_selection.character_name) {
				total_size += 8;
				total_size += sizeof(uint16_t);
				total_size += character.m_name.size * sizeof(uint8_t) * character.size_used;
				dcon::record_header iheader(0, "$array", "character", "name");
				total_size += iheader.serialize_size();
			}
			if(serialize_selection.location) {
				dcon::record_header header(0, "uint32_t", "location", "$size");
				total_size += header.serialize_size();
				total_size += sizeof(uint32_t);
			}
			if(serialize_selection.cell) {
				dcon::record_header header(0, "uint32_t", "cell", "$size");
				total_size += header.serialize_size();
				total_size += sizeof(uint32_t);
			}
			if(serialize_selection.cell_rat_smell) {
				dcon::record_header iheader(0, "float", "cell", "rat_smell");
				total_size += iheader.serialize_size();
				total_size += sizeof(float) * cell.size_used;
			}
			if(serialize_selection.local_locations) {
				dcon::record_header header(0, "uint32_t", "local_locations", "$size");
				total_size += header.serialize_size();
				total_size += sizeof(uint32_t);
				if(serialize_selection.local_locations_cell) {
					dcon::record_header iheader(0, "uint32_t", "local_locations", "cell");
					total_size += iheader.serialize_size();
					total_size += sizeof(cell_id) * location.size_used;
				}
				dcon::record_header headerb(0, "$", "local_locations", "$index_end");
				total_size += headerb.serialize_size();
			}
			if(serialize_selection.character_position) {
				dcon::record_header header(0, "uint32_t", "character_position", "$size");
				total_size += header.serialize_size();
				total_size += sizeof(uint32_t);
				if(serialize_selection.character_position_character) {
					dcon::record_header iheader(0, "uint32_t", "character_position", "character");
					total_size += iheader.serialize_size();
					total_size += sizeof(character_id) * location.size_used;
				}
				dcon::record_header headerb(0, "$", "character_position", "$index_end");
				total_size += headerb.serialize_size();
			}
			if(serialize_selection.owned_character) {
				dcon::record_header header(0, "uint32_t", "owned_character", "$size");
				total_size += header.serialize_size();
				total_size += sizeof(uint32_t);
				if(serialize_selection.owned_character_character) {
					dcon::record_header iheader(0, "uint32_t", "owned_character", "character");
					total_size += iheader.serialize_size();
					total_size += sizeof(character_id) * user.size_used;
				}
				dcon::record_header headerb(0, "$", "owned_character", "$index_end");
				total_size += headerb.serialize_size();
			}
			return total_size;
		}
		
		//
		// serialize the desired objects, relationships, and properties
		//
		void serialize(std::byte*& output_buffer, load_record const& serialize_selection) const {
			if(serialize_selection.user) {
				dcon::record_header header(sizeof(uint32_t), "uint32_t", "user", "$size");
				header.serialize(output_buffer);
				*(reinterpret_cast<uint32_t*>(output_buffer)) = user.size_used;
				output_buffer += sizeof(uint32_t);
			}
			if(serialize_selection.user_login) {
				dcon::record_header header(8 + sizeof(uint16_t) + sizeof(uint8_t) * user.m_login.size * user.size_used, "$array", "user", "login");
				header.serialize(output_buffer);
				std::memcpy(reinterpret_cast<char*>(output_buffer), "uint8_t", 8);
				output_buffer += 8;
				*(reinterpret_cast<uint16_t*>(output_buffer)) = uint16_t(user.m_login.size);
				output_buffer += sizeof(uint16_t);
				for(int32_t s = 0; s < int32_t(user.m_login.size); ++s) {
					std::memcpy(reinterpret_cast<uint8_t*>(output_buffer), user.m_login.vptr(s), sizeof(uint8_t) * user.size_used);
					output_buffer +=  sizeof(uint8_t) * user.size_used;
				}
			}
			if(serialize_selection.user_password_hash) {
				dcon::record_header header(8 + sizeof(uint16_t) + sizeof(int32_t) * user.m_password_hash.size * user.size_used, "$array", "user", "password_hash");
				header.serialize(output_buffer);
				std::memcpy(reinterpret_cast<char*>(output_buffer), "int32_t", 8);
				output_buffer += 8;
				*(reinterpret_cast<uint16_t*>(output_buffer)) = uint16_t(user.m_password_hash.size);
				output_buffer += sizeof(uint16_t);
				for(int32_t s = 0; s < int32_t(user.m_password_hash.size); ++s) {
					std::memcpy(reinterpret_cast<int32_t*>(output_buffer), user.m_password_hash.vptr(s), sizeof(int32_t) * user.size_used);
					output_buffer +=  sizeof(int32_t) * user.size_used;
				}
			}
			if(serialize_selection.user_is_tester) {
				dcon::record_header header((user.size_used + 7) / 8, "bitfield", "user", "is_tester");
				header.serialize(output_buffer);
				std::memcpy(reinterpret_cast<dcon::bitfield_type*>(output_buffer), user.m_is_tester.vptr(), (user.size_used + 7) / 8);
				output_buffer += (user.size_used + 7) / 8;
			}
			if(serialize_selection.user_is_admin) {
				dcon::record_header header((user.size_used + 7) / 8, "bitfield", "user", "is_admin");
				header.serialize(output_buffer);
				std::memcpy(reinterpret_cast<dcon::bitfield_type*>(output_buffer), user.m_is_admin.vptr(), (user.size_used + 7) / 8);
				output_buffer += (user.size_used + 7) / 8;
			}
			if(serialize_selection.user_session) {
				dcon::record_header header(7 + sizeof(uint16_t) + sizeof(int8_t) * user.m_session.size * user.size_used, "$array", "user", "session");
				header.serialize(output_buffer);
				std::memcpy(reinterpret_cast<char*>(output_buffer), "int8_t", 7);
				output_buffer += 7;
				*(reinterpret_cast<uint16_t*>(output_buffer)) = uint16_t(user.m_session.size);
				output_buffer += sizeof(uint16_t);
				for(int32_t s = 0; s < int32_t(user.m_session.size); ++s) {
					std::memcpy(reinterpret_cast<int8_t*>(output_buffer), user.m_session.vptr(s), sizeof(int8_t) * user.size_used);
					output_buffer +=  sizeof(int8_t) * user.size_used;
				}
			}
			if(serialize_selection.character) {
				dcon::record_header header(sizeof(uint32_t), "uint32_t", "character", "$size");
				header.serialize(output_buffer);
				*(reinterpret_cast<uint32_t*>(output_buffer)) = character.size_used;
				output_buffer += sizeof(uint32_t);
			}
			if(serialize_selection.character__index) {
				dcon::record_header header(sizeof(character_id) * character.size_used, "uint32_t", "character", "_index");
				header.serialize(output_buffer);
				std::memcpy(reinterpret_cast<character_id*>(output_buffer), character.m__index.vptr(), sizeof(character_id) * character.size_used);
				output_buffer += sizeof(character_id) * character.size_used;
			}
			if(serialize_selection.character_name) {
				dcon::record_header header(8 + sizeof(uint16_t) + sizeof(uint8_t) * character.m_name.size * character.size_used, "$array", "character", "name");
				header.serialize(output_buffer);
				std::memcpy(reinterpret_cast<char*>(output_buffer), "uint8_t", 8);
				output_buffer += 8;
				*(reinterpret_cast<uint16_t*>(output_buffer)) = uint16_t(character.m_name.size);
				output_buffer += sizeof(uint16_t);
				for(int32_t s = 0; s < int32_t(character.m_name.size); ++s) {
					std::memcpy(reinterpret_cast<uint8_t*>(output_buffer), character.m_name.vptr(s), sizeof(uint8_t) * character.size_used);
					output_buffer +=  sizeof(uint8_t) * character.size_used;
				}
			}
			if(serialize_selection.location) {
				dcon::record_header header(sizeof(uint32_t), "uint32_t", "location", "$size");
				header.serialize(output_buffer);
				*(reinterpret_cast<uint32_t*>(output_buffer)) = location.size_used;
				output_buffer += sizeof(uint32_t);
			}
			if(serialize_selection.cell) {
				dcon::record_header header(sizeof(uint32_t), "uint32_t", "cell", "$size");
				header.serialize(output_buffer);
				*(reinterpret_cast<uint32_t*>(output_buffer)) = cell.size_used;
				output_buffer += sizeof(uint32_t);
			}
			if(serialize_selection.cell_rat_smell) {
				dcon::record_header header(sizeof(float) * cell.size_used, "float", "cell", "rat_smell");
				header.serialize(output_buffer);
				std::memcpy(reinterpret_cast<float*>(output_buffer), cell.m_rat_smell.vptr(), sizeof(float) * cell.size_used);
				output_buffer += sizeof(float) * cell.size_used;
			}
			if(serialize_selection.local_locations) {
				dcon::record_header header(sizeof(uint32_t), "uint32_t", "local_locations", "$size");
				header.serialize(output_buffer);
				*(reinterpret_cast<uint32_t*>(output_buffer)) = location.size_used;
				output_buffer += sizeof(uint32_t);
				 {
					dcon::record_header iheader(sizeof(cell_id) * location.size_used, "uint32_t", "local_locations", "cell");
					iheader.serialize(output_buffer);
					std::memcpy(reinterpret_cast<cell_id*>(output_buffer), local_locations.m_cell.vptr(), sizeof(cell_id) * location.size_used);
					output_buffer += sizeof(cell_id) *  location.size_used;
				}
				dcon::record_header headerb(0, "$", "local_locations", "$index_end");
				headerb.serialize(output_buffer);
			}
			if(serialize_selection.character_position) {
				dcon::record_header header(sizeof(uint32_t), "uint32_t", "character_position", "$size");
				header.serialize(output_buffer);
				*(reinterpret_cast<uint32_t*>(output_buffer)) = location.size_used;
				output_buffer += sizeof(uint32_t);
				 {
					dcon::record_header iheader(sizeof(character_id) * location.size_used, "uint32_t", "character_position", "character");
					iheader.serialize(output_buffer);
					std::memcpy(reinterpret_cast<character_id*>(output_buffer), character_position.m_character.vptr(), sizeof(character_id) * location.size_used);
					output_buffer += sizeof(character_id) *  location.size_used;
				}
				dcon::record_header headerb(0, "$", "character_position", "$index_end");
				headerb.serialize(output_buffer);
			}
			if(serialize_selection.owned_character) {
				dcon::record_header header(sizeof(uint32_t), "uint32_t", "owned_character", "$size");
				header.serialize(output_buffer);
				*(reinterpret_cast<uint32_t*>(output_buffer)) = user.size_used;
				output_buffer += sizeof(uint32_t);
				 {
					dcon::record_header iheader(sizeof(character_id) * user.size_used, "uint32_t", "owned_character", "character");
					iheader.serialize(output_buffer);
					std::memcpy(reinterpret_cast<character_id*>(output_buffer), owned_character.m_character.vptr(), sizeof(character_id) * user.size_used);
					output_buffer += sizeof(character_id) *  user.size_used;
				}
				dcon::record_header headerb(0, "$", "owned_character", "$index_end");
				headerb.serialize(output_buffer);
			}
		}
		
		private:
		void deserialize_helper(std::byte const*& input_buffer, std::byte const* end, dcon::record_header& header, load_record& serialize_selection, load_record const& mask) {
			if(input_buffer + header.record_size <= end) {
				if(header.is_object("user") && mask.user) {
					if(header.is_property("$size") && header.record_size == sizeof(uint32_t)) {
						user_resize(*(reinterpret_cast<uint32_t const*>(input_buffer)));
						serialize_selection.user = true;
						return;
					}
					if(header.is_property("login") && mask.user_login) {
						if(header.is_type("$array")) {
							std::byte const* zero_pos = std::find(input_buffer, input_buffer + header.record_size, std::byte(0));
							std::byte const* icpy = zero_pos + 1;
							if(dcon::char_span_equals_str(reinterpret_cast<char const*>(input_buffer), reinterpret_cast<char const*>(zero_pos), "uint8_t")) {
								if(icpy + sizeof(uint16_t) <= input_buffer + header.record_size) {
									user.m_login.resize(*(reinterpret_cast<uint16_t const*>(icpy)), user.size_used);
									icpy += sizeof(uint16_t);
								} else {
									user.m_login.resize(0, user.size_used);
								}
								for(int32_t s = 0; s < int32_t(user.m_login.size) && icpy < input_buffer + header.record_size; ++s) {
									std::memcpy(user.m_login.vptr(s), reinterpret_cast<uint8_t const*>(icpy), std::min(sizeof(uint8_t) * user.size_used, size_t(input_buffer + header.record_size - icpy)));
									icpy += sizeof(uint8_t) * user.size_used;
								}
								serialize_selection.user_login = true;
							}
						}
						return;
					}
					if(header.is_property("password_hash") && mask.user_password_hash) {
						if(header.is_type("$array")) {
							std::byte const* zero_pos = std::find(input_buffer, input_buffer + header.record_size, std::byte(0));
							std::byte const* icpy = zero_pos + 1;
							if(dcon::char_span_equals_str(reinterpret_cast<char const*>(input_buffer), reinterpret_cast<char const*>(zero_pos), "int32_t")) {
								if(icpy + sizeof(uint16_t) <= input_buffer + header.record_size) {
									user.m_password_hash.resize(*(reinterpret_cast<uint16_t const*>(icpy)), user.size_used);
									icpy += sizeof(uint16_t);
								} else {
									user.m_password_hash.resize(0, user.size_used);
								}
								for(int32_t s = 0; s < int32_t(user.m_password_hash.size) && icpy < input_buffer + header.record_size; ++s) {
									std::memcpy(user.m_password_hash.vptr(s), reinterpret_cast<int32_t const*>(icpy), std::min(sizeof(int32_t) * user.size_used, size_t(input_buffer + header.record_size - icpy)));
									icpy += sizeof(int32_t) * user.size_used;
								}
								serialize_selection.user_password_hash = true;
							}
						}
						return;
					}
					if(header.is_property("is_tester") && mask.user_is_tester) {
						if(header.is_type("bitfield")) {
							std::memcpy(user.m_is_tester.vptr(), reinterpret_cast<dcon::bitfield_type const*>(input_buffer), std::min(size_t(user.size_used + 7) / 8, size_t(header.record_size)));
							serialize_selection.user_is_tester = true;
						}
						return;
					}
					if(header.is_property("is_admin") && mask.user_is_admin) {
						if(header.is_type("bitfield")) {
							std::memcpy(user.m_is_admin.vptr(), reinterpret_cast<dcon::bitfield_type const*>(input_buffer), std::min(size_t(user.size_used + 7) / 8, size_t(header.record_size)));
							serialize_selection.user_is_admin = true;
						}
						return;
					}
					if(header.is_property("session") && mask.user_session) {
						if(header.is_type("$array")) {
							std::byte const* zero_pos = std::find(input_buffer, input_buffer + header.record_size, std::byte(0));
							std::byte const* icpy = zero_pos + 1;
							if(dcon::char_span_equals_str(reinterpret_cast<char const*>(input_buffer), reinterpret_cast<char const*>(zero_pos), "int8_t")) {
								if(icpy + sizeof(uint16_t) <= input_buffer + header.record_size) {
									user.m_session.resize(*(reinterpret_cast<uint16_t const*>(icpy)), user.size_used);
									icpy += sizeof(uint16_t);
								} else {
									user.m_session.resize(0, user.size_used);
								}
								for(int32_t s = 0; s < int32_t(user.m_session.size) && icpy < input_buffer + header.record_size; ++s) {
									std::memcpy(user.m_session.vptr(s), reinterpret_cast<int8_t const*>(icpy), std::min(sizeof(int8_t) * user.size_used, size_t(input_buffer + header.record_size - icpy)));
									icpy += sizeof(int8_t) * user.size_used;
								}
								serialize_selection.user_session = true;
							}
						}
						return;
					}
					return;
				}
				if(header.is_object("character") && mask.character) {
					if(header.is_property("$size") && header.record_size == sizeof(uint32_t)) {
						character_resize(*(reinterpret_cast<uint32_t const*>(input_buffer)));
						serialize_selection.character = true;
						return;
					}
					if(header.is_property("_index") && mask.character__index) {
						if(header.is_type("uint32_t")) {
							std::memcpy(character.m__index.vptr(), reinterpret_cast<uint32_t const*>(input_buffer), std::min(size_t(character.size_used) * sizeof(uint32_t), size_t(header.record_size)));
							serialize_selection.character__index = true;
						}
						if(serialize_selection.character__index == true) {
							character.first_free = character_id();
							for(int32_t j = 100000 - 1; j >= 0; --j) {
								if(character.m__index.vptr()[j] != character_id(uint32_t(j))) {
									character.m__index.vptr()[j] = character.first_free;
									character.first_free = character_id(uint32_t(j));
								} else {
								}
							}
						}
						return;
					}
					if(header.is_property("name") && mask.character_name) {
						if(header.is_type("$array")) {
							std::byte const* zero_pos = std::find(input_buffer, input_buffer + header.record_size, std::byte(0));
							std::byte const* icpy = zero_pos + 1;
							if(dcon::char_span_equals_str(reinterpret_cast<char const*>(input_buffer), reinterpret_cast<char const*>(zero_pos), "uint8_t")) {
								if(icpy + sizeof(uint16_t) <= input_buffer + header.record_size) {
									character.m_name.resize(*(reinterpret_cast<uint16_t const*>(icpy)), character.size_used);
									icpy += sizeof(uint16_t);
								} else {
									character.m_name.resize(0, character.size_used);
								}
								for(int32_t s = 0; s < int32_t(character.m_name.size) && icpy < input_buffer + header.record_size; ++s) {
									std::memcpy(character.m_name.vptr(s), reinterpret_cast<uint8_t const*>(icpy), std::min(sizeof(uint8_t) * character.size_used, size_t(input_buffer + header.record_size - icpy)));
									icpy += sizeof(uint8_t) * character.size_used;
								}
								serialize_selection.character_name = true;
							}
						}
						return;
					}
					return;
				}
				if(header.is_object("location") && mask.location) {
					if(header.is_property("$size") && header.record_size == sizeof(uint32_t)) {
						location_resize(*(reinterpret_cast<uint32_t const*>(input_buffer)));
						serialize_selection.location = true;
						return;
					}
					return;
				}
				if(header.is_object("cell") && mask.cell) {
					if(header.is_property("$size") && header.record_size == sizeof(uint32_t)) {
						cell_resize(*(reinterpret_cast<uint32_t const*>(input_buffer)));
						serialize_selection.cell = true;
						return;
					}
					if(header.is_property("rat_smell") && mask.cell_rat_smell) {
						if(header.is_type("float")) {
							std::memcpy(cell.m_rat_smell.vptr(), reinterpret_cast<float const*>(input_buffer), std::min(size_t(cell.size_used) * sizeof(float), size_t(header.record_size)));
							serialize_selection.cell_rat_smell = true;
						}
						return;
					}
					return;
				}
				if(header.is_object("local_locations") && mask.local_locations) {
					if(header.is_property("$size") && header.record_size == sizeof(uint32_t)) {
						if(*(reinterpret_cast<uint32_t const*>(input_buffer)) >= location.size_used) {
							local_locations_resize(0);
						}
						local_locations_resize(*(reinterpret_cast<uint32_t const*>(input_buffer)));
						serialize_selection.local_locations = true;
						return;
					}
					if(header.is_property("cell") && mask.local_locations_cell) {
						if(header.is_type("uint32_t")) {
							std::memcpy(local_locations.m_cell.vptr(), reinterpret_cast<uint32_t const*>(input_buffer), std::min(size_t(location.size_used) * sizeof(uint32_t), size_t(header.record_size)));
							serialize_selection.local_locations_cell = true;
						}
						return;
					}
					if(header.is_property("$index_end") && mask.local_locations) {
						if(serialize_selection.local_locations_cell == true) {
							for(uint32_t i = 0; i < location.size_used; ++i) {
								auto tmp = local_locations.m_cell.vptr()[i];
								local_locations.m_cell.vptr()[i] = cell_id();
								internal_local_locations_set_cell(local_locations_id(local_locations_id::value_base_t(i)), tmp);
							}
						}
						return;
					}
					return;
				}
				if(header.is_object("character_position") && mask.character_position) {
					if(header.is_property("$size") && header.record_size == sizeof(uint32_t)) {
						if(*(reinterpret_cast<uint32_t const*>(input_buffer)) >= location.size_used) {
							character_position_resize(0);
						}
						character_position_resize(*(reinterpret_cast<uint32_t const*>(input_buffer)));
						serialize_selection.character_position = true;
						return;
					}
					if(header.is_property("character") && mask.character_position_character) {
						if(header.is_type("uint32_t")) {
							std::memcpy(character_position.m_character.vptr(), reinterpret_cast<uint32_t const*>(input_buffer), std::min(size_t(location.size_used) * sizeof(uint32_t), size_t(header.record_size)));
							serialize_selection.character_position_character = true;
						}
						return;
					}
					if(header.is_property("$index_end") && mask.character_position) {
						if(serialize_selection.character_position_character == true) {
							for(uint32_t i = 0; i < location.size_used; ++i) {
								auto tmp = character_position.m_character.vptr()[i];
								character_position.m_character.vptr()[i] = character_id();
								internal_character_position_set_character(character_position_id(character_position_id::value_base_t(i)), tmp);
							}
						}
						return;
					}
					return;
				}
				if(header.is_object("owned_character") && mask.owned_character) {
					if(header.is_property("$size") && header.record_size == sizeof(uint32_t)) {
						if(*(reinterpret_cast<uint32_t const*>(input_buffer)) >= user.size_used) {
							owned_character_resize(0);
						}
						owned_character_resize(*(reinterpret_cast<uint32_t const*>(input_buffer)));
						serialize_selection.owned_character = true;
						return;
					}
					if(header.is_property("character") && mask.owned_character_character) {
						if(header.is_type("uint32_t")) {
							std::memcpy(owned_character.m_character.vptr(), reinterpret_cast<uint32_t const*>(input_buffer), std::min(size_t(user.size_used) * sizeof(uint32_t), size_t(header.record_size)));
							serialize_selection.owned_character_character = true;
						}
						return;
					}
					if(header.is_property("$index_end") && mask.owned_character) {
						if(serialize_selection.owned_character_character == true) {
							for(uint32_t i = 0; i < user.size_used; ++i) {
								auto tmp = owned_character.m_character.vptr()[i];
								owned_character.m_character.vptr()[i] = character_id();
								internal_owned_character_set_character(owned_character_id(owned_character_id::value_base_t(i)), tmp);
							}
						}
						return;
					}
					return;
				}
			}
		}
		public:
		//
		// deserialize the desired objects, relationships, and properties
		//
		void deserialize(std::byte const*& input_buffer, std::byte const* end, load_record& serialize_selection) {
			auto mask = serialize_entire_container_record();
			while(input_buffer < end) {
				dcon::record_header header;
				header.deserialize(input_buffer, end);
				deserialize_helper(input_buffer, end, header, serialize_selection, mask);
				input_buffer += header.record_size;
			}
		}
		
		//
		// deserialize the desired objects, relationships, and properties where the mask is set
		//
		void deserialize(std::byte const*& input_buffer, std::byte const* end, load_record& serialize_selection, load_record const& mask) {
			while(input_buffer < end) {
				dcon::record_header header;
				header.deserialize(input_buffer, end);
				deserialize_helper(input_buffer, end, header, serialize_selection, mask);
				input_buffer += header.record_size;
			}
		}
		

	};

	DCON_RELEASE_INLINE uint8_t& user_fat_id::get_login(uint8_t i) const noexcept {
		return container.user_get_login(id, i);
	}
	DCON_RELEASE_INLINE uint32_t user_fat_id::get_login_size() const noexcept {
		return container.user_get_login_size();
	}
	DCON_RELEASE_INLINE void user_fat_id::set_login(uint8_t i, uint8_t v) const noexcept {
		container.user_set_login(id, i, v);
	}
	DCON_RELEASE_INLINE void user_fat_id::resize_login(uint32_t sz) const noexcept {
		container.user_resize_login(sz);
	}
	DCON_RELEASE_INLINE int32_t& user_fat_id::get_password_hash(uint8_t i) const noexcept {
		return container.user_get_password_hash(id, i);
	}
	DCON_RELEASE_INLINE uint32_t user_fat_id::get_password_hash_size() const noexcept {
		return container.user_get_password_hash_size();
	}
	DCON_RELEASE_INLINE void user_fat_id::set_password_hash(uint8_t i, int32_t v) const noexcept {
		container.user_set_password_hash(id, i, v);
	}
	DCON_RELEASE_INLINE void user_fat_id::resize_password_hash(uint32_t sz) const noexcept {
		container.user_resize_password_hash(sz);
	}
	DCON_RELEASE_INLINE bool user_fat_id::get_is_tester() const noexcept {
		return container.user_get_is_tester(id);
	}
	DCON_RELEASE_INLINE void user_fat_id::set_is_tester(bool v) const noexcept {
		container.user_set_is_tester(id, v);
	}
	DCON_RELEASE_INLINE bool user_fat_id::get_is_admin() const noexcept {
		return container.user_get_is_admin(id);
	}
	DCON_RELEASE_INLINE void user_fat_id::set_is_admin(bool v) const noexcept {
		container.user_set_is_admin(id, v);
	}
	DCON_RELEASE_INLINE int8_t& user_fat_id::get_session(uint8_t i) const noexcept {
		return container.user_get_session(id, i);
	}
	DCON_RELEASE_INLINE uint32_t user_fat_id::get_session_size() const noexcept {
		return container.user_get_session_size();
	}
	DCON_RELEASE_INLINE void user_fat_id::set_session(uint8_t i, int8_t v) const noexcept {
		container.user_set_session(id, i, v);
	}
	DCON_RELEASE_INLINE void user_fat_id::resize_session(uint32_t sz) const noexcept {
		container.user_resize_session(sz);
	}
	DCON_RELEASE_INLINE owned_character_fat_id user_fat_id::get_owned_character_as_user() const noexcept {
		return owned_character_fat_id(container, container.user_get_owned_character_as_user(id));
	}
	DCON_RELEASE_INLINE void user_fat_id::remove_owned_character_as_user() const noexcept {
		container.user_remove_owned_character_as_user(id);
	}
	DCON_RELEASE_INLINE owned_character_fat_id user_fat_id::get_owned_character() const noexcept {
		return owned_character_fat_id(container, container.user_get_owned_character(id));
	}
	DCON_RELEASE_INLINE void user_fat_id::remove_owned_character() const noexcept {
		container.user_remove_owned_character(id);
	}
	DCON_RELEASE_INLINE character_fat_id user_fat_id::get_character_from_owned_character() const noexcept {
		return character_fat_id(container, container.user_get_character_from_owned_character(id));
	}
	DCON_RELEASE_INLINE void user_fat_id::set_character_from_owned_character(character_id v) const noexcept {
		container.user_set_character_from_owned_character(id, v);
	}
	DCON_RELEASE_INLINE bool user_fat_id::is_valid() const noexcept {
		return container.user_is_valid(id);
	}
	
	DCON_RELEASE_INLINE uint8_t user_const_fat_id::get_login(uint8_t i) const noexcept {
		return container.user_get_login(id, i);
	}
	DCON_RELEASE_INLINE uint32_t user_const_fat_id::get_login_size() const noexcept {
		return container.user_get_login_size();
	}
	DCON_RELEASE_INLINE int32_t user_const_fat_id::get_password_hash(uint8_t i) const noexcept {
		return container.user_get_password_hash(id, i);
	}
	DCON_RELEASE_INLINE uint32_t user_const_fat_id::get_password_hash_size() const noexcept {
		return container.user_get_password_hash_size();
	}
	DCON_RELEASE_INLINE bool user_const_fat_id::get_is_tester() const noexcept {
		return container.user_get_is_tester(id);
	}
	DCON_RELEASE_INLINE bool user_const_fat_id::get_is_admin() const noexcept {
		return container.user_get_is_admin(id);
	}
	DCON_RELEASE_INLINE int8_t user_const_fat_id::get_session(uint8_t i) const noexcept {
		return container.user_get_session(id, i);
	}
	DCON_RELEASE_INLINE uint32_t user_const_fat_id::get_session_size() const noexcept {
		return container.user_get_session_size();
	}
	DCON_RELEASE_INLINE owned_character_const_fat_id user_const_fat_id::get_owned_character_as_user() const noexcept {
		return owned_character_const_fat_id(container, container.user_get_owned_character_as_user(id));
	}
	DCON_RELEASE_INLINE owned_character_const_fat_id user_const_fat_id::get_owned_character() const noexcept {
		return owned_character_const_fat_id(container, container.user_get_owned_character(id));
	}
	DCON_RELEASE_INLINE character_const_fat_id user_const_fat_id::get_character_from_owned_character() const noexcept {
		return character_const_fat_id(container, container.user_get_character_from_owned_character(id));
	}
	DCON_RELEASE_INLINE bool user_const_fat_id::is_valid() const noexcept {
		return container.user_is_valid(id);
	}
	
	DCON_RELEASE_INLINE uint8_t& character_fat_id::get_name(uint8_t i) const noexcept {
		return container.character_get_name(id, i);
	}
	DCON_RELEASE_INLINE uint32_t character_fat_id::get_name_size() const noexcept {
		return container.character_get_name_size();
	}
	DCON_RELEASE_INLINE void character_fat_id::set_name(uint8_t i, uint8_t v) const noexcept {
		container.character_set_name(id, i, v);
	}
	DCON_RELEASE_INLINE void character_fat_id::resize_name(uint32_t sz) const noexcept {
		container.character_resize_name(sz);
	}
	template<typename T>
	DCON_RELEASE_INLINE void character_fat_id::for_each_character_position_as_character(T&& func) const {
		container.character_for_each_character_position_as_character(id, [&, t = this](character_position_id i){func(fatten(t->container, i));});
	}
	DCON_RELEASE_INLINE std::pair<character_position_id const*, character_position_id const*> character_fat_id::range_of_character_position_as_character() const {
		return container.character_range_of_character_position_as_character(id);
	}
	DCON_RELEASE_INLINE void character_fat_id::remove_all_character_position_as_character() const noexcept {
		container.character_remove_all_character_position_as_character(id);
	}
	DCON_RELEASE_INLINE internal::iterator_character_foreach_character_position_as_character_generator character_fat_id::get_character_position_as_character() const {
		return internal::iterator_character_foreach_character_position_as_character_generator(container, id);
	}
	template<typename T>
	DCON_RELEASE_INLINE void character_fat_id::for_each_character_position(T&& func) const {
		container.character_for_each_character_position(id, [&, t = this](character_position_id i){func(fatten(t->container, i));});
	}
	DCON_RELEASE_INLINE std::pair<character_position_id const*, character_position_id const*> character_fat_id::range_of_character_position() const {
		return container.character_range_of_character_position(id);
	}
	DCON_RELEASE_INLINE void character_fat_id::remove_all_character_position() const noexcept {
		container.character_remove_all_character_position(id);
	}
	DCON_RELEASE_INLINE internal::iterator_character_foreach_character_position_as_character_generator character_fat_id::get_character_position() const {
		return internal::iterator_character_foreach_character_position_as_character_generator(container, id);
	}
	DCON_RELEASE_INLINE owned_character_fat_id character_fat_id::get_owned_character_as_character() const noexcept {
		return owned_character_fat_id(container, container.character_get_owned_character_as_character(id));
	}
	DCON_RELEASE_INLINE void character_fat_id::remove_owned_character_as_character() const noexcept {
		container.character_remove_owned_character_as_character(id);
	}
	DCON_RELEASE_INLINE owned_character_fat_id character_fat_id::get_owned_character() const noexcept {
		return owned_character_fat_id(container, container.character_get_owned_character(id));
	}
	DCON_RELEASE_INLINE void character_fat_id::remove_owned_character() const noexcept {
		container.character_remove_owned_character(id);
	}
	DCON_RELEASE_INLINE user_fat_id character_fat_id::get_user_from_owned_character() const noexcept {
		return user_fat_id(container, container.character_get_user_from_owned_character(id));
	}
	DCON_RELEASE_INLINE void character_fat_id::set_user_from_owned_character(user_id v) const noexcept {
		container.character_set_user_from_owned_character(id, v);
	}
	DCON_RELEASE_INLINE bool character_fat_id::is_valid() const noexcept {
		return container.character_is_valid(id);
	}
	
	DCON_RELEASE_INLINE uint8_t character_const_fat_id::get_name(uint8_t i) const noexcept {
		return container.character_get_name(id, i);
	}
	DCON_RELEASE_INLINE uint32_t character_const_fat_id::get_name_size() const noexcept {
		return container.character_get_name_size();
	}
	template<typename T>
	DCON_RELEASE_INLINE void character_const_fat_id::for_each_character_position_as_character(T&& func) const {
		container.character_for_each_character_position_as_character(id, [&, t = this](character_position_id i){func(fatten(t->container, i));});
	}
	DCON_RELEASE_INLINE std::pair<character_position_id const*, character_position_id const*> character_const_fat_id::range_of_character_position_as_character() const {
		return container.character_range_of_character_position_as_character(id);
	}
	DCON_RELEASE_INLINE internal::const_iterator_character_foreach_character_position_as_character_generator character_const_fat_id::get_character_position_as_character() const {
		return internal::const_iterator_character_foreach_character_position_as_character_generator(container, id);
	}
	template<typename T>
	DCON_RELEASE_INLINE void character_const_fat_id::for_each_character_position(T&& func) const {
		container.character_for_each_character_position(id, [&, t = this](character_position_id i){func(fatten(t->container, i));});
	}
	DCON_RELEASE_INLINE std::pair<character_position_id const*, character_position_id const*> character_const_fat_id::range_of_character_position() const {
		return container.character_range_of_character_position(id);
	}
	DCON_RELEASE_INLINE internal::const_iterator_character_foreach_character_position_as_character_generator character_const_fat_id::get_character_position() const {
		return internal::const_iterator_character_foreach_character_position_as_character_generator(container, id);
	}
	DCON_RELEASE_INLINE owned_character_const_fat_id character_const_fat_id::get_owned_character_as_character() const noexcept {
		return owned_character_const_fat_id(container, container.character_get_owned_character_as_character(id));
	}
	DCON_RELEASE_INLINE owned_character_const_fat_id character_const_fat_id::get_owned_character() const noexcept {
		return owned_character_const_fat_id(container, container.character_get_owned_character(id));
	}
	DCON_RELEASE_INLINE user_const_fat_id character_const_fat_id::get_user_from_owned_character() const noexcept {
		return user_const_fat_id(container, container.character_get_user_from_owned_character(id));
	}
	DCON_RELEASE_INLINE bool character_const_fat_id::is_valid() const noexcept {
		return container.character_is_valid(id);
	}
	
	DCON_RELEASE_INLINE local_locations_fat_id location_fat_id::get_local_locations_as_location() const noexcept {
		return local_locations_fat_id(container, container.location_get_local_locations_as_location(id));
	}
	DCON_RELEASE_INLINE void location_fat_id::remove_local_locations_as_location() const noexcept {
		container.location_remove_local_locations_as_location(id);
	}
	DCON_RELEASE_INLINE local_locations_fat_id location_fat_id::get_local_locations() const noexcept {
		return local_locations_fat_id(container, container.location_get_local_locations(id));
	}
	DCON_RELEASE_INLINE void location_fat_id::remove_local_locations() const noexcept {
		container.location_remove_local_locations(id);
	}
	DCON_RELEASE_INLINE cell_fat_id location_fat_id::get_cell_from_local_locations() const noexcept {
		return cell_fat_id(container, container.location_get_cell_from_local_locations(id));
	}
	DCON_RELEASE_INLINE void location_fat_id::set_cell_from_local_locations(cell_id v) const noexcept {
		container.location_set_cell_from_local_locations(id, v);
	}
	DCON_RELEASE_INLINE character_position_fat_id location_fat_id::get_character_position_as_location() const noexcept {
		return character_position_fat_id(container, container.location_get_character_position_as_location(id));
	}
	DCON_RELEASE_INLINE void location_fat_id::remove_character_position_as_location() const noexcept {
		container.location_remove_character_position_as_location(id);
	}
	DCON_RELEASE_INLINE character_position_fat_id location_fat_id::get_character_position() const noexcept {
		return character_position_fat_id(container, container.location_get_character_position(id));
	}
	DCON_RELEASE_INLINE void location_fat_id::remove_character_position() const noexcept {
		container.location_remove_character_position(id);
	}
	DCON_RELEASE_INLINE character_fat_id location_fat_id::get_character_from_character_position() const noexcept {
		return character_fat_id(container, container.location_get_character_from_character_position(id));
	}
	DCON_RELEASE_INLINE void location_fat_id::set_character_from_character_position(character_id v) const noexcept {
		container.location_set_character_from_character_position(id, v);
	}
	DCON_RELEASE_INLINE bool location_fat_id::is_valid() const noexcept {
		return container.location_is_valid(id);
	}
	
	DCON_RELEASE_INLINE local_locations_const_fat_id location_const_fat_id::get_local_locations_as_location() const noexcept {
		return local_locations_const_fat_id(container, container.location_get_local_locations_as_location(id));
	}
	DCON_RELEASE_INLINE local_locations_const_fat_id location_const_fat_id::get_local_locations() const noexcept {
		return local_locations_const_fat_id(container, container.location_get_local_locations(id));
	}
	DCON_RELEASE_INLINE cell_const_fat_id location_const_fat_id::get_cell_from_local_locations() const noexcept {
		return cell_const_fat_id(container, container.location_get_cell_from_local_locations(id));
	}
	DCON_RELEASE_INLINE character_position_const_fat_id location_const_fat_id::get_character_position_as_location() const noexcept {
		return character_position_const_fat_id(container, container.location_get_character_position_as_location(id));
	}
	DCON_RELEASE_INLINE character_position_const_fat_id location_const_fat_id::get_character_position() const noexcept {
		return character_position_const_fat_id(container, container.location_get_character_position(id));
	}
	DCON_RELEASE_INLINE character_const_fat_id location_const_fat_id::get_character_from_character_position() const noexcept {
		return character_const_fat_id(container, container.location_get_character_from_character_position(id));
	}
	DCON_RELEASE_INLINE bool location_const_fat_id::is_valid() const noexcept {
		return container.location_is_valid(id);
	}
	
	DCON_RELEASE_INLINE float& cell_fat_id::get_rat_smell() const noexcept {
		return container.cell_get_rat_smell(id);
	}
	DCON_RELEASE_INLINE void cell_fat_id::set_rat_smell(float v) const noexcept {
		container.cell_set_rat_smell(id, v);
	}
	template<typename T>
	DCON_RELEASE_INLINE void cell_fat_id::for_each_local_locations_as_cell(T&& func) const {
		container.cell_for_each_local_locations_as_cell(id, [&, t = this](local_locations_id i){func(fatten(t->container, i));});
	}
	DCON_RELEASE_INLINE std::pair<local_locations_id const*, local_locations_id const*> cell_fat_id::range_of_local_locations_as_cell() const {
		return container.cell_range_of_local_locations_as_cell(id);
	}
	DCON_RELEASE_INLINE void cell_fat_id::remove_all_local_locations_as_cell() const noexcept {
		container.cell_remove_all_local_locations_as_cell(id);
	}
	DCON_RELEASE_INLINE internal::iterator_cell_foreach_local_locations_as_cell_generator cell_fat_id::get_local_locations_as_cell() const {
		return internal::iterator_cell_foreach_local_locations_as_cell_generator(container, id);
	}
	template<typename T>
	DCON_RELEASE_INLINE void cell_fat_id::for_each_local_locations(T&& func) const {
		container.cell_for_each_local_locations(id, [&, t = this](local_locations_id i){func(fatten(t->container, i));});
	}
	DCON_RELEASE_INLINE std::pair<local_locations_id const*, local_locations_id const*> cell_fat_id::range_of_local_locations() const {
		return container.cell_range_of_local_locations(id);
	}
	DCON_RELEASE_INLINE void cell_fat_id::remove_all_local_locations() const noexcept {
		container.cell_remove_all_local_locations(id);
	}
	DCON_RELEASE_INLINE internal::iterator_cell_foreach_local_locations_as_cell_generator cell_fat_id::get_local_locations() const {
		return internal::iterator_cell_foreach_local_locations_as_cell_generator(container, id);
	}
	DCON_RELEASE_INLINE bool cell_fat_id::is_valid() const noexcept {
		return container.cell_is_valid(id);
	}
	
	DCON_RELEASE_INLINE float cell_const_fat_id::get_rat_smell() const noexcept {
		return container.cell_get_rat_smell(id);
	}
	template<typename T>
	DCON_RELEASE_INLINE void cell_const_fat_id::for_each_local_locations_as_cell(T&& func) const {
		container.cell_for_each_local_locations_as_cell(id, [&, t = this](local_locations_id i){func(fatten(t->container, i));});
	}
	DCON_RELEASE_INLINE std::pair<local_locations_id const*, local_locations_id const*> cell_const_fat_id::range_of_local_locations_as_cell() const {
		return container.cell_range_of_local_locations_as_cell(id);
	}
	DCON_RELEASE_INLINE internal::const_iterator_cell_foreach_local_locations_as_cell_generator cell_const_fat_id::get_local_locations_as_cell() const {
		return internal::const_iterator_cell_foreach_local_locations_as_cell_generator(container, id);
	}
	template<typename T>
	DCON_RELEASE_INLINE void cell_const_fat_id::for_each_local_locations(T&& func) const {
		container.cell_for_each_local_locations(id, [&, t = this](local_locations_id i){func(fatten(t->container, i));});
	}
	DCON_RELEASE_INLINE std::pair<local_locations_id const*, local_locations_id const*> cell_const_fat_id::range_of_local_locations() const {
		return container.cell_range_of_local_locations(id);
	}
	DCON_RELEASE_INLINE internal::const_iterator_cell_foreach_local_locations_as_cell_generator cell_const_fat_id::get_local_locations() const {
		return internal::const_iterator_cell_foreach_local_locations_as_cell_generator(container, id);
	}
	DCON_RELEASE_INLINE bool cell_const_fat_id::is_valid() const noexcept {
		return container.cell_is_valid(id);
	}
	
	DCON_RELEASE_INLINE cell_fat_id local_locations_fat_id::get_cell() const noexcept {
		return cell_fat_id(container, container.local_locations_get_cell(id));
	}
	DCON_RELEASE_INLINE void local_locations_fat_id::set_cell(cell_id val) const noexcept {
		container.local_locations_set_cell(id, val);
	}
	DCON_RELEASE_INLINE bool local_locations_fat_id::try_set_cell(cell_id val) const noexcept {
		return container.local_locations_try_set_cell(id, val);
	}
	DCON_RELEASE_INLINE location_fat_id local_locations_fat_id::get_location() const noexcept {
		return location_fat_id(container, container.local_locations_get_location(id));
	}
	DCON_RELEASE_INLINE void local_locations_fat_id::set_location(location_id val) const noexcept {
		container.local_locations_set_location(id, val);
	}
	DCON_RELEASE_INLINE bool local_locations_fat_id::try_set_location(location_id val) const noexcept {
		return container.local_locations_try_set_location(id, val);
	}
	DCON_RELEASE_INLINE bool local_locations_fat_id::is_valid() const noexcept {
		return container.local_locations_is_valid(id);
	}
	
	DCON_RELEASE_INLINE cell_const_fat_id local_locations_const_fat_id::get_cell() const noexcept {
		return cell_const_fat_id(container, container.local_locations_get_cell(id));
	}
	DCON_RELEASE_INLINE location_const_fat_id local_locations_const_fat_id::get_location() const noexcept {
		return location_const_fat_id(container, container.local_locations_get_location(id));
	}
	DCON_RELEASE_INLINE bool local_locations_const_fat_id::is_valid() const noexcept {
		return container.local_locations_is_valid(id);
	}
	
	DCON_RELEASE_INLINE location_fat_id character_position_fat_id::get_location() const noexcept {
		return location_fat_id(container, container.character_position_get_location(id));
	}
	DCON_RELEASE_INLINE void character_position_fat_id::set_location(location_id val) const noexcept {
		container.character_position_set_location(id, val);
	}
	DCON_RELEASE_INLINE bool character_position_fat_id::try_set_location(location_id val) const noexcept {
		return container.character_position_try_set_location(id, val);
	}
	DCON_RELEASE_INLINE character_fat_id character_position_fat_id::get_character() const noexcept {
		return character_fat_id(container, container.character_position_get_character(id));
	}
	DCON_RELEASE_INLINE void character_position_fat_id::set_character(character_id val) const noexcept {
		container.character_position_set_character(id, val);
	}
	DCON_RELEASE_INLINE bool character_position_fat_id::try_set_character(character_id val) const noexcept {
		return container.character_position_try_set_character(id, val);
	}
	DCON_RELEASE_INLINE bool character_position_fat_id::is_valid() const noexcept {
		return container.character_position_is_valid(id);
	}
	
	DCON_RELEASE_INLINE location_const_fat_id character_position_const_fat_id::get_location() const noexcept {
		return location_const_fat_id(container, container.character_position_get_location(id));
	}
	DCON_RELEASE_INLINE character_const_fat_id character_position_const_fat_id::get_character() const noexcept {
		return character_const_fat_id(container, container.character_position_get_character(id));
	}
	DCON_RELEASE_INLINE bool character_position_const_fat_id::is_valid() const noexcept {
		return container.character_position_is_valid(id);
	}
	
	DCON_RELEASE_INLINE user_fat_id owned_character_fat_id::get_user() const noexcept {
		return user_fat_id(container, container.owned_character_get_user(id));
	}
	DCON_RELEASE_INLINE void owned_character_fat_id::set_user(user_id val) const noexcept {
		container.owned_character_set_user(id, val);
	}
	DCON_RELEASE_INLINE bool owned_character_fat_id::try_set_user(user_id val) const noexcept {
		return container.owned_character_try_set_user(id, val);
	}
	DCON_RELEASE_INLINE character_fat_id owned_character_fat_id::get_character() const noexcept {
		return character_fat_id(container, container.owned_character_get_character(id));
	}
	DCON_RELEASE_INLINE void owned_character_fat_id::set_character(character_id val) const noexcept {
		container.owned_character_set_character(id, val);
	}
	DCON_RELEASE_INLINE bool owned_character_fat_id::try_set_character(character_id val) const noexcept {
		return container.owned_character_try_set_character(id, val);
	}
	DCON_RELEASE_INLINE bool owned_character_fat_id::is_valid() const noexcept {
		return container.owned_character_is_valid(id);
	}
	
	DCON_RELEASE_INLINE user_const_fat_id owned_character_const_fat_id::get_user() const noexcept {
		return user_const_fat_id(container, container.owned_character_get_user(id));
	}
	DCON_RELEASE_INLINE character_const_fat_id owned_character_const_fat_id::get_character() const noexcept {
		return character_const_fat_id(container, container.owned_character_get_character(id));
	}
	DCON_RELEASE_INLINE bool owned_character_const_fat_id::is_valid() const noexcept {
		return container.owned_character_is_valid(id);
	}
	

	namespace internal {
		DCON_RELEASE_INLINE object_iterator_user::object_iterator_user(data_container& c, uint32_t i) noexcept : container(c), index(i) {
		}
		DCON_RELEASE_INLINE const_object_iterator_user::const_object_iterator_user(data_container const& c, uint32_t i) noexcept : container(c), index(i) {
		}
		DCON_RELEASE_INLINE object_iterator_user& object_iterator_user::operator++() noexcept {
			++index;
			return *this;
		}
		DCON_RELEASE_INLINE const_object_iterator_user& const_object_iterator_user::operator++() noexcept {
			++index;
			return *this;
		}
		DCON_RELEASE_INLINE object_iterator_user& object_iterator_user::operator--() noexcept {
			--index;
			return *this;
		}
		DCON_RELEASE_INLINE const_object_iterator_user& const_object_iterator_user::operator--() noexcept {
			--index;
			return *this;
		}
		
		DCON_RELEASE_INLINE object_iterator_character::object_iterator_character(data_container& c, uint32_t i) noexcept : container(c), index(i) {
			while(container.character.m__index.vptr()[index] != character_id(character_id::value_base_t(index)) && index < container.character.size_used) {
				++index;
			}
		}
		DCON_RELEASE_INLINE const_object_iterator_character::const_object_iterator_character(data_container const& c, uint32_t i) noexcept : container(c), index(i) {
			while(container.character.m__index.vptr()[index] != character_id(character_id::value_base_t(index)) && index < container.character.size_used) {
				++index;
			}
		}
		DCON_RELEASE_INLINE object_iterator_character& object_iterator_character::operator++() noexcept {
			++index;
			while(container.character.m__index.vptr()[index] != character_id(character_id::value_base_t(index)) && index < container.character.size_used) {
				++index;
			}
			return *this;
		}
		DCON_RELEASE_INLINE const_object_iterator_character& const_object_iterator_character::operator++() noexcept {
			++index;
			while(container.character.m__index.vptr()[index] != character_id(character_id::value_base_t(index)) && index < container.character.size_used) {
				++index;
			}
			return *this;
		}
		DCON_RELEASE_INLINE object_iterator_character& object_iterator_character::operator--() noexcept {
			--index;
			while(container.character.m__index.vptr()[index] != character_id(character_id::value_base_t(index)) && index < container.character.size_used) {
				--index;
			}
			return *this;
		}
		DCON_RELEASE_INLINE const_object_iterator_character& const_object_iterator_character::operator--() noexcept {
			--index;
			while(container.character.m__index.vptr()[index] != character_id(character_id::value_base_t(index)) && index < container.character.size_used) {
				--index;
			}
			return *this;
		}
		
		DCON_RELEASE_INLINE iterator_character_foreach_character_position_as_character::iterator_character_foreach_character_position_as_character(data_container& c,  character_id fr) noexcept : container(c) {
			ptr = dcon::get_range(container.character_position.character_storage, container.character_position.m_array_character.vptr()[fr.index()]).first;
		}
		DCON_RELEASE_INLINE iterator_character_foreach_character_position_as_character::iterator_character_foreach_character_position_as_character(data_container& c, character_id fr, int) noexcept : container(c) {
			ptr = dcon::get_range(container.character_position.character_storage, container.character_position.m_array_character.vptr()[fr.index()]).second;
		}
		DCON_RELEASE_INLINE iterator_character_foreach_character_position_as_character& iterator_character_foreach_character_position_as_character::operator++() noexcept {
			++ptr;
			return *this;
		}
		DCON_RELEASE_INLINE iterator_character_foreach_character_position_as_character& iterator_character_foreach_character_position_as_character::operator--() noexcept {
			--ptr;
			return *this;
		}
		DCON_RELEASE_INLINE const_iterator_character_foreach_character_position_as_character::const_iterator_character_foreach_character_position_as_character(data_container const& c,  character_id fr) noexcept : container(c) {
			ptr = dcon::get_range(container.character_position.character_storage, container.character_position.m_array_character.vptr()[fr.index()]).first;
		}
		DCON_RELEASE_INLINE const_iterator_character_foreach_character_position_as_character::const_iterator_character_foreach_character_position_as_character(data_container const& c, character_id fr, int) noexcept : container(c) {
			ptr = dcon::get_range(container.character_position.character_storage, container.character_position.m_array_character.vptr()[fr.index()]).second;
		}
		DCON_RELEASE_INLINE const_iterator_character_foreach_character_position_as_character& const_iterator_character_foreach_character_position_as_character::operator++() noexcept {
			++ptr;
			return *this;
		}
		DCON_RELEASE_INLINE const_iterator_character_foreach_character_position_as_character& const_iterator_character_foreach_character_position_as_character::operator--() noexcept {
			--ptr;
			return *this;
		}
		
		DCON_RELEASE_INLINE object_iterator_location::object_iterator_location(data_container& c, uint32_t i) noexcept : container(c), index(i) {
		}
		DCON_RELEASE_INLINE const_object_iterator_location::const_object_iterator_location(data_container const& c, uint32_t i) noexcept : container(c), index(i) {
		}
		DCON_RELEASE_INLINE object_iterator_location& object_iterator_location::operator++() noexcept {
			++index;
			return *this;
		}
		DCON_RELEASE_INLINE const_object_iterator_location& const_object_iterator_location::operator++() noexcept {
			++index;
			return *this;
		}
		DCON_RELEASE_INLINE object_iterator_location& object_iterator_location::operator--() noexcept {
			--index;
			return *this;
		}
		DCON_RELEASE_INLINE const_object_iterator_location& const_object_iterator_location::operator--() noexcept {
			--index;
			return *this;
		}
		
		DCON_RELEASE_INLINE object_iterator_cell::object_iterator_cell(data_container& c, uint32_t i) noexcept : container(c), index(i) {
		}
		DCON_RELEASE_INLINE const_object_iterator_cell::const_object_iterator_cell(data_container const& c, uint32_t i) noexcept : container(c), index(i) {
		}
		DCON_RELEASE_INLINE object_iterator_cell& object_iterator_cell::operator++() noexcept {
			++index;
			return *this;
		}
		DCON_RELEASE_INLINE const_object_iterator_cell& const_object_iterator_cell::operator++() noexcept {
			++index;
			return *this;
		}
		DCON_RELEASE_INLINE object_iterator_cell& object_iterator_cell::operator--() noexcept {
			--index;
			return *this;
		}
		DCON_RELEASE_INLINE const_object_iterator_cell& const_object_iterator_cell::operator--() noexcept {
			--index;
			return *this;
		}
		
		DCON_RELEASE_INLINE iterator_cell_foreach_local_locations_as_cell::iterator_cell_foreach_local_locations_as_cell(data_container& c,  cell_id fr) noexcept : container(c) {
			ptr = dcon::get_range(container.local_locations.cell_storage, container.local_locations.m_array_cell.vptr()[fr.index()]).first;
		}
		DCON_RELEASE_INLINE iterator_cell_foreach_local_locations_as_cell::iterator_cell_foreach_local_locations_as_cell(data_container& c, cell_id fr, int) noexcept : container(c) {
			ptr = dcon::get_range(container.local_locations.cell_storage, container.local_locations.m_array_cell.vptr()[fr.index()]).second;
		}
		DCON_RELEASE_INLINE iterator_cell_foreach_local_locations_as_cell& iterator_cell_foreach_local_locations_as_cell::operator++() noexcept {
			++ptr;
			return *this;
		}
		DCON_RELEASE_INLINE iterator_cell_foreach_local_locations_as_cell& iterator_cell_foreach_local_locations_as_cell::operator--() noexcept {
			--ptr;
			return *this;
		}
		DCON_RELEASE_INLINE const_iterator_cell_foreach_local_locations_as_cell::const_iterator_cell_foreach_local_locations_as_cell(data_container const& c,  cell_id fr) noexcept : container(c) {
			ptr = dcon::get_range(container.local_locations.cell_storage, container.local_locations.m_array_cell.vptr()[fr.index()]).first;
		}
		DCON_RELEASE_INLINE const_iterator_cell_foreach_local_locations_as_cell::const_iterator_cell_foreach_local_locations_as_cell(data_container const& c, cell_id fr, int) noexcept : container(c) {
			ptr = dcon::get_range(container.local_locations.cell_storage, container.local_locations.m_array_cell.vptr()[fr.index()]).second;
		}
		DCON_RELEASE_INLINE const_iterator_cell_foreach_local_locations_as_cell& const_iterator_cell_foreach_local_locations_as_cell::operator++() noexcept {
			++ptr;
			return *this;
		}
		DCON_RELEASE_INLINE const_iterator_cell_foreach_local_locations_as_cell& const_iterator_cell_foreach_local_locations_as_cell::operator--() noexcept {
			--ptr;
			return *this;
		}
		
		DCON_RELEASE_INLINE object_iterator_local_locations::object_iterator_local_locations(data_container& c, uint32_t i) noexcept : container(c), index(i) {
		}
		DCON_RELEASE_INLINE const_object_iterator_local_locations::const_object_iterator_local_locations(data_container const& c, uint32_t i) noexcept : container(c), index(i) {
		}
		DCON_RELEASE_INLINE object_iterator_local_locations& object_iterator_local_locations::operator++() noexcept {
			++index;
			return *this;
		}
		DCON_RELEASE_INLINE const_object_iterator_local_locations& const_object_iterator_local_locations::operator++() noexcept {
			++index;
			return *this;
		}
		DCON_RELEASE_INLINE object_iterator_local_locations& object_iterator_local_locations::operator--() noexcept {
			--index;
			return *this;
		}
		DCON_RELEASE_INLINE const_object_iterator_local_locations& const_object_iterator_local_locations::operator--() noexcept {
			--index;
			return *this;
		}
		
		DCON_RELEASE_INLINE object_iterator_character_position::object_iterator_character_position(data_container& c, uint32_t i) noexcept : container(c), index(i) {
		}
		DCON_RELEASE_INLINE const_object_iterator_character_position::const_object_iterator_character_position(data_container const& c, uint32_t i) noexcept : container(c), index(i) {
		}
		DCON_RELEASE_INLINE object_iterator_character_position& object_iterator_character_position::operator++() noexcept {
			++index;
			return *this;
		}
		DCON_RELEASE_INLINE const_object_iterator_character_position& const_object_iterator_character_position::operator++() noexcept {
			++index;
			return *this;
		}
		DCON_RELEASE_INLINE object_iterator_character_position& object_iterator_character_position::operator--() noexcept {
			--index;
			return *this;
		}
		DCON_RELEASE_INLINE const_object_iterator_character_position& const_object_iterator_character_position::operator--() noexcept {
			--index;
			return *this;
		}
		
		DCON_RELEASE_INLINE object_iterator_owned_character::object_iterator_owned_character(data_container& c, uint32_t i) noexcept : container(c), index(i) {
		}
		DCON_RELEASE_INLINE const_object_iterator_owned_character::const_object_iterator_owned_character(data_container const& c, uint32_t i) noexcept : container(c), index(i) {
		}
		DCON_RELEASE_INLINE object_iterator_owned_character& object_iterator_owned_character::operator++() noexcept {
			++index;
			return *this;
		}
		DCON_RELEASE_INLINE const_object_iterator_owned_character& const_object_iterator_owned_character::operator++() noexcept {
			++index;
			return *this;
		}
		DCON_RELEASE_INLINE object_iterator_owned_character& object_iterator_owned_character::operator--() noexcept {
			--index;
			return *this;
		}
		DCON_RELEASE_INLINE const_object_iterator_owned_character& const_object_iterator_owned_character::operator--() noexcept {
			--index;
			return *this;
		}
		
	};


}

#undef DCON_RELEASE_INLINE
#ifdef _MSC_VER
#pragma warning( pop )
#endif

