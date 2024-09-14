#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4c0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_BinaryObject : public server::CBaseEntity
    {
    public:
        bool m_bActive; // 0x4b8        
        [[maybe_unused]] std::uint8_t pad_0x4b9[0x3]; // 0x4b9
        int32_t m_nBinaryID; // 0x4bc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BinaryObject because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BinaryObject) == 0x4c0);
};
