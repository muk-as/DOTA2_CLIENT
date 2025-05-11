#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABehaviorMoveToNPCToAttack.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x1b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorTutorialRazorMoveToNPCToAttack : public source2sdk::server::CDOTABehaviorMoveToNPCToAttack
        {
        public:
            source2sdk::server::CountdownTimer m_PlasmaFieldDelay; // 0x198            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTABehaviorTutorialRazorMoveToNPCToAttack because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorTutorialRazorMoveToNPCToAttack) == 0x1b0);
    };
};
