#pragma once
#include "source2sdk/server/CDOTABehaviorMoveToNPCToAttack.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x1b0
    // Has VTable
    #pragma pack(push, 1)
    class CDOTABehaviorTutorialRazorMoveToNPCToAttack : public server::CDOTABehaviorMoveToNPCToAttack
    {
    public:
        server::CountdownTimer m_PlasmaFieldDelay; // 0x198        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTABehaviorTutorialRazorMoveToNPCToAttack because it is not a standard-layout class
    static_assert(sizeof(CDOTABehaviorTutorialRazorMoveToNPCToAttack) == 0x1b0);
};
