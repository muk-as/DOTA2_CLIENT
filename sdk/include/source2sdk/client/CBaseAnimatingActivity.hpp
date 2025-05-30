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
        // Size: 0x998
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
            bool m_bShouldAnimateDuringGameplayPause; // 0x970            
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0x971            
            bool m_bAnimationUpdateScheduled; // 0x972            
            uint8_t _pad0973[0x5]; // 0x973
            // m_pSuppressedAnimEventTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString>* m_pSuppressedAnimEventTags;
            char m_pSuppressedAnimEventTags[0x8]; // 0x978            
            bool m_bHasAnimatedMaterialAttributes; // 0x980            
            uint8_t _pad0981[0xf]; // 0x981
            bool m_bSuppressAnimEventSounds; // 0x990            
            uint8_t _pad0991[0x7];
            
            // Datamap fields:
            // float InputSetPlaybackRate; // 0x0
            // bool InputDisableAnimEventSounds; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimatingActivity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimatingActivity) == 0x998);
    };
};
