#pragma once
#include "source2sdk/server/CDOTA_Modifier_Kill.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Enigma_DemonicConversion : public server::CDOTA_Modifier_Kill
    {
    public:
        int32_t m_iAttackCount; // 0x16f0        
        int32_t split_attack_count; // 0x16f4        
        float life_extension; // 0x16f8        
        int32_t eidolon_attack_range; // 0x16fc        
        int32_t eidolon_bonus_damage; // 0x1700        
        int32_t eidolon_bonus_attack_speed; // 0x1704        
        bool m_bAllowSplit; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        int32_t m_nSpawnNum; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Enigma_DemonicConversion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Enigma_DemonicConversion) == 0x1710);
};
