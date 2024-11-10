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
    // Size: 0x7c0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "bool m_bShouldAnimateDuringGameplayPause"
    // static metadata: MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
    #pragma pack(push, 1)
    class CBaseAnimatingActivity : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bShouldAnimateDuringGameplayPause; // 0x7b0        
        // metadata: MNetworkEnable
        bool m_bInitiallyPopulateInterpHistory; // 0x7b1        
        bool m_bAnimationUpdateScheduled; // 0x7b2        
        [[maybe_unused]] std::uint8_t pad_0x7b3[0x5]; // 0x7b3
        // m_pSuppressedAnimEventTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString>* m_pSuppressedAnimEventTags;
        char m_pSuppressedAnimEventTags[0x8]; // 0x7b8        
        
        // Datamap fields:
        // float InputSetPlaybackRate; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseAnimatingActivity because it is not a standard-layout class
    static_assert(sizeof(CBaseAnimatingActivity) == 0x7c0);
};
