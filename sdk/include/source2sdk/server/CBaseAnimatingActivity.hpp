#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x798
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bShouldAnimateDuringGameplayPause"
    // static metadata: MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
    #pragma pack(push, 1)
    class CBaseAnimatingActivity : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bShouldAnimateDuringGameplayPause; // 0x788        
        // metadata: MNetworkEnable
        bool m_bInitiallyPopulateInterpHistory; // 0x789        
        bool m_bAnimationUpdateScheduled; // 0x78a        
        [[maybe_unused]] std::uint8_t pad_0x78b[0x5]; // 0x78b
        // m_pSuppressedAnimEventTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString>* m_pSuppressedAnimEventTags;
        char m_pSuppressedAnimEventTags[0x8]; // 0x790        
        
        // Datamap fields:
        // float InputSetPlaybackRate; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseAnimatingActivity because it is not a standard-layout class
    static_assert(sizeof(CBaseAnimatingActivity) == 0x798);
};
