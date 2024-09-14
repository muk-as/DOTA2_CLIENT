#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1820
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
    // static metadata: MNetworkVarNames "Vector m_vProjectilePosition"
    #pragma pack(push, 1)
    class CDOTA_Unit_Tidehunter_Anchor : public server::CDOTA_BaseNPC_Additive
    {
    public:
        // metadata: MNetworkEnable
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x1810        
        // metadata: MNetworkEnable
        Vector m_vProjectilePosition; // 0x1814        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Tidehunter_Anchor because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Tidehunter_Anchor) == 0x1820);
};
