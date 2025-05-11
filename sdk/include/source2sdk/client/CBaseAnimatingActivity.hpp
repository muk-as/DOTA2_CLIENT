#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7f8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "bool m_bShouldAnimateDuringGameplayPause"
        // static metadata: MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
        #pragma pack(push, 1)
        class CBaseAnimatingActivity : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bShouldAnimateDuringGameplayPause; // 0x7d0            
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0x7d1            
            bool m_bAnimationUpdateScheduled; // 0x7d2            
            uint8_t _pad07d3[0x5]; // 0x7d3
            // m_pSuppressedAnimEventTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString>* m_pSuppressedAnimEventTags;
            char m_pSuppressedAnimEventTags[0x8]; // 0x7d8            
            bool m_bHasAnimatedMaterialAttributes; // 0x7e0            
            uint8_t _pad07e1[0xf]; // 0x7e1
            bool m_bSuppressAnimEventSounds; // 0x7f0            
            uint8_t _pad07f1[0x7];
            
            // Datamap fields:
            // float InputSetPlaybackRate; // 0x0
            // bool InputDisableAnimEventSounds; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimatingActivity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimatingActivity) == 0x7f8);
    };
};
