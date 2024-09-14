#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CDOTA_Buff;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Silencer_GlaivesOfWisdom : public client::CDOTA_Buff
    {
    public:
        float intellect_damage_pct; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16ec[0x4]; // 0x16ec
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x16f0        
        // m_InFlightSilenceAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightSilenceAttackRecords;
        char m_InFlightSilenceAttackRecords[0x18]; // 0x1708        
        client::CDOTA_Buff* m_pAttackCounterBuff; // 0x1720        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Silencer_GlaivesOfWisdom because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Silencer_GlaivesOfWisdom) == 0x1728);
};
