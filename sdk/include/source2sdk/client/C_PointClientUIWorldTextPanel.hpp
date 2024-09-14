#pragma once
#include "source2sdk/client/C_PointClientUIWorldPanel.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0xc40
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "char m_messageText"
    #pragma pack(push, 1)
    class C_PointClientUIWorldTextPanel : public client::C_PointClientUIWorldPanel
    {
    public:
        // metadata: MNetworkEnable
        char m_messageText[512]; // 0xa40        
        
        // Datamap fields:
        // void InputToggle; // 0x0
        // CUtlSymbolLarge InputSetMessage; // 0x0
        // int32_t InputSetIntMessage; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointClientUIWorldTextPanel because it is not a standard-layout class
    static_assert(sizeof(C_PointClientUIWorldTextPanel) == 0xc40);
};
