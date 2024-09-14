#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1738
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Jakiro_IcePath_Thinker : public client::CDOTA_Buff
    {
    public:
        float path_delay; // 0x16e8        
        int32_t path_radius; // 0x16ec        
        int32_t m_nDamage; // 0x16f0        
        float m_flRadius; // 0x16f4        
        float stun_duration; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4]; // 0x16fc
        // m_hUnitsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hUnitsHit;
        char m_hUnitsHit[0x18]; // 0x1700        
        Vector m_vPathStart; // 0x1718        
        Vector m_vPathEnd; // 0x1724        
        entity2::GameTime_t m_fStartTime; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Jakiro_IcePath_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Jakiro_IcePath_Thinker) == 0x1738);
};
