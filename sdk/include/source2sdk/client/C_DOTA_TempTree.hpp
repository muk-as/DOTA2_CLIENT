#pragma once
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x950
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "Vector m_vecTreeCircleCenter"
    // static metadata: MNetworkVarNames "bool m_bCanApplyTreeCostume"
    // static metadata: MNetworkVarNames "bool m_bIsMangoTree"
    // static metadata: MNetworkVarNames "bool m_bIsPartOfFowSystem"
    #pragma pack(push, 1)
    class C_DOTA_TempTree : public client::CBaseAnimatingActivity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x848[0x30]; // 0x848
        entity2::GameTime_t m_fExpireTime; // 0x878        
        // metadata: MNetworkEnable
        Vector m_vecTreeCircleCenter; // 0x87c        
        // metadata: MNetworkEnable
        bool m_bCanApplyTreeCostume; // 0x888        
        // metadata: MNetworkEnable
        bool m_bIsMangoTree; // 0x889        
        [[maybe_unused]] std::uint8_t pad_0x88a[0x6]; // 0x88a
        // m_ParticleList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_ParticleList;
        char m_ParticleList[0x18]; // 0x890        
        // metadata: MNetworkEnable
        bool m_bIsPartOfFowSystem; // 0x8a8        
        [[maybe_unused]] std::uint8_t pad_0x8a9[0xa7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_TempTree because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_TempTree) == 0x950);
};
