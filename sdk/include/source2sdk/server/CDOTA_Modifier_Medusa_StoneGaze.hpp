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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Medusa_StoneGaze : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x16e8        
        float vision_cone; // 0x16ec        
        float duration; // 0x16f0        
        int32_t speed_boost; // 0x16f4        
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x1710[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Medusa_StoneGaze because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Medusa_StoneGaze) == 0x1718);
};
