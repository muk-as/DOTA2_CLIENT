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
    // Size: 0x908
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "Vector m_vecTreeCircleCenter"
    // static metadata: MNetworkVarNames "bool m_bCanApplyTreeCostume"
    // static metadata: MNetworkVarNames "bool m_bIsMangoTree"
    // static metadata: MNetworkVarNames "bool m_bIsPartOfFowSystem"
    #pragma pack(push, 1)
    class C_DOTA_TempTree : public client::CBaseAnimatingActivity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x800[0x30]; // 0x800
        entity2::GameTime_t m_fExpireTime; // 0x830        
        // metadata: MNetworkEnable
        Vector m_vecTreeCircleCenter; // 0x834        
        // metadata: MNetworkEnable
        bool m_bCanApplyTreeCostume; // 0x840        
        // metadata: MNetworkEnable
        bool m_bIsMangoTree; // 0x841        
        [[maybe_unused]] std::uint8_t pad_0x842[0x6]; // 0x842
        // m_ParticleList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_ParticleList;
        char m_ParticleList[0x18]; // 0x848        
        // metadata: MNetworkEnable
        bool m_bIsPartOfFowSystem; // 0x860        
        [[maybe_unused]] std::uint8_t pad_0x861[0xa7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_TempTree because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_TempTree) == 0x908);
};
