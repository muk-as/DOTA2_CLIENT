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
    // Size: 0x1830
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nTimesSpawned"
    #pragma pack(push, 1)
    class CDOTA_Unit_Miniboss : public server::CDOTA_BaseNPC_Additive
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nTimesSpawned; // 0x1810        
        int32_t m_nTempViewer; // 0x1814        
        // m_hAttackingHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hAttackingHeroes;
        char m_hAttackingHeroes[0x18]; // 0x1818        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Miniboss because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Miniboss) == 0x1830);
};
