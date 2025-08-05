#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x800
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "bool m_bShouldAnimateDuringGameplayPause"
        // static metadata: MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
        #pragma pack(push, 1)
        class CBaseAnimatingActivity : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bShouldAnimateDuringGameplayPause; // 0x7f0            
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0x7f1            
            bool m_bAnimationUpdateScheduled; // 0x7f2            
            uint8_t _pad07f3[0x5]; // 0x7f3
            // m_pSuppressedAnimEventTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString>* m_pSuppressedAnimEventTags;
            char m_pSuppressedAnimEventTags[0x8]; // 0x7f8            
            
            // Datamap fields:
            // float InputSetPlaybackRate; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimatingActivity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseAnimatingActivity) == 0x800);
    };
};
