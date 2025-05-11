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
        // Size: 0x7b8
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
            bool m_bShouldAnimateDuringGameplayPause; // 0x7a8            
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0x7a9            
            bool m_bAnimationUpdateScheduled; // 0x7aa            
            uint8_t _pad07ab[0x5]; // 0x7ab
            // m_pSuppressedAnimEventTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString>* m_pSuppressedAnimEventTags;
            char m_pSuppressedAnimEventTags[0x8]; // 0x7b0            
            
            // Datamap fields:
            // float InputSetPlaybackRate; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimatingActivity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseAnimatingActivity) == 0x7b8);
    };
};
