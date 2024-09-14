#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1820
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nTimesSpawned"
    #pragma pack(push, 1)
    class C_DOTA_Unit_Miniboss : public client::C_DOTA_BaseNPC_Additive
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nTimesSpawned; // 0x1800        
        int32_t m_nTempViewer; // 0x1804        
        // m_hAttackingHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hAttackingHeroes;
        char m_hAttackingHeroes[0x18]; // 0x1808        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Miniboss because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Miniboss) == 0x1820);
};
