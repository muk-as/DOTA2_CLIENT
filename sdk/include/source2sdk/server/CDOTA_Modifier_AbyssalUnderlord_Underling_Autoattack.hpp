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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AbyssalUnderlord_Underling_Autoattack : public client::CDOTA_Buff
    {
    public:
        // m_hBestTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBestTarget;
        char m_hBestTarget[0x4]; // 0x16e8        
        float underling_search_radius; // 0x16ec        
        bool m_bRunningToFountain; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f1[0x3]; // 0x16f1
        int32_t underling_building_damage_reduction; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AbyssalUnderlord_Underling_Autoattack because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AbyssalUnderlord_Underling_Autoattack) == 0x16f8);
};
