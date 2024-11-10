#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
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
    // Size: 0x848
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "bool m_bShouldAnimateDuringGameplayPause"
    // static metadata: MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
    #pragma pack(push, 1)
    class CBaseAnimatingActivity : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bShouldAnimateDuringGameplayPause; // 0x820        
        // metadata: MNetworkEnable
        bool m_bInitiallyPopulateInterpHistory; // 0x821        
        bool m_bAnimationUpdateScheduled; // 0x822        
        [[maybe_unused]] std::uint8_t pad_0x823[0x5]; // 0x823
        // m_pSuppressedAnimEventTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString>* m_pSuppressedAnimEventTags;
        char m_pSuppressedAnimEventTags[0x8]; // 0x828        
        bool m_bHasAnimatedMaterialAttributes; // 0x830        
        [[maybe_unused]] std::uint8_t pad_0x831[0xf]; // 0x831
        bool m_bSuppressAnimEventSounds; // 0x840        
        [[maybe_unused]] std::uint8_t pad_0x841[0x7];
        
        // Datamap fields:
        // float InputSetPlaybackRate; // 0x0
        // bool InputDisableAnimEventSounds; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseAnimatingActivity because it is not a standard-layout class
    static_assert(sizeof(CBaseAnimatingActivity) == 0x848);
};
