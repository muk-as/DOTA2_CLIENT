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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Centaur_Cart : public client::CDOTA_Buff
    {
    public:
        // m_hUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hUnit;
        char m_hUnit[0x4]; // 0x1708        
        bool m_bWasMoving; // 0x170c        
        bool m_bSpawnDone; // 0x170d        
        [[maybe_unused]] std::uint8_t pad_0x170e[0x2]; // 0x170e
        Vector m_vecOldForward; // 0x1710        
        int32_t break_distance; // 0x171c        
        Vector m_vecPreviousLocation; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Centaur_Cart because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Centaur_Cart) == 0x1730);
};
