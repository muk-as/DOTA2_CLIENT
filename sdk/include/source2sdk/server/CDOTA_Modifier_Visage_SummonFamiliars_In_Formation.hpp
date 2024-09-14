#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Visage_SummonFamiliars_In_Formation : public client::CDOTA_Buff
    {
    public:
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwner;
        char m_hOwner[0x4]; // 0x16e8        
        // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCurrentTarget;
        char m_hCurrentTarget[0x4]; // 0x16ec        
        int32_t familiar_index; // 0x16f0        
        int32_t back_distance; // 0x16f4        
        int32_t side_distance; // 0x16f8        
        Vector m_vecDesiredPosition; // 0x16fc        
        int32_t max_distance; // 0x1708        
        int32_t return_distance; // 0x170c        
        int32_t attack_range_buffer; // 0x1710        
        float recall_duration; // 0x1714        
        bool m_bTeleporting; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x3]; // 0x1719
        int32_t familiar_attack_range; // 0x171c        
        int32_t additional_target_search_radius; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Visage_SummonFamiliars_In_Formation because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Visage_SummonFamiliars_In_Formation) == 0x1728);
};
