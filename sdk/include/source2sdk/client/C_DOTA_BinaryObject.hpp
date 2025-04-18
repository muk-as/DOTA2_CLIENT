#pragma once
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x850
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_BinaryObject : public client::CBaseAnimatingActivity
    {
    public:
        bool m_bActive; // 0x848        
        [[maybe_unused]] std::uint8_t pad_0x849[0x3]; // 0x849
        int32_t m_nBinaryID; // 0x84c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BinaryObject because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BinaryObject) == 0x850);
};
