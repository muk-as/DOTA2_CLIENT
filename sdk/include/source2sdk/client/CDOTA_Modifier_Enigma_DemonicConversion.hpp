#pragma once
#include "source2sdk/client/CDOTA_Modifier_Kill.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Enigma_DemonicConversion : public client::CDOTA_Modifier_Kill
    {
    public:
        int32_t m_iAttackCount; // 0x1710        
        int32_t split_attack_count; // 0x1714        
        float life_extension; // 0x1718        
        int32_t eidolon_attack_range; // 0x171c        
        int32_t eidolon_bonus_damage; // 0x1720        
        int32_t eidolon_bonus_attack_speed; // 0x1724        
        bool m_bAllowSplit; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1729[0x3]; // 0x1729
        int32_t m_nSpawnNum; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Enigma_DemonicConversion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Enigma_DemonicConversion) == 0x1730);
};
