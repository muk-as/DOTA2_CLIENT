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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Primalbeast_Trample : public client::CDOTA_Buff
    {
    public:
        float effect_radius; // 0x16e8        
        Vector vLastPos; // 0x16ec        
        float flCurrentDistance; // 0x16f8        
        int32_t step_distance; // 0x16fc        
        int32_t bonus_magic_resistance; // 0x1700        
        bool m_bIsUnslowable; // 0x1704        
        [[maybe_unused]] std::uint8_t pad_0x1705[0x3]; // 0x1705
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1708        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Primalbeast_Trample because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Primalbeast_Trample) == 0x1720);
};
