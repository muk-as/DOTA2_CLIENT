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
    class CDOTA_Modifier_Mirana_Starfall_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t starfall_secondary_radius; // 0x16e8        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x16ec        
        int32_t m_iDamage; // 0x16f0        
        bool m_bStarDropped; // 0x16f4        
        bool m_bSecondStar; // 0x16f5        
        [[maybe_unused]] std::uint8_t pad_0x16f6[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mirana_Starfall_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mirana_Starfall_Thinker) == 0x16f8);
};
