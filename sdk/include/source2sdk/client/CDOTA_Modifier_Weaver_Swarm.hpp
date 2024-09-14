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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Weaver_Swarm : public client::CDOTA_Buff
    {
    public:
        int32_t m_iMaxDist; // 0x16e8        
        int32_t m_iAttackCount; // 0x16ec        
        int32_t destroy_attacks; // 0x16f0        
        Vector m_vDirection; // 0x16f4        
        Vector m_vStartLoc; // 0x1700        
        // m_hAttachTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAttachTarget;
        char m_hAttachTarget[0x4]; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Weaver_Swarm because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Weaver_Swarm) == 0x1710);
};
