#pragma once
#include "source2sdk/server/CPointClientUIWorldPanel.hpp"
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
    // Size: 0xb90
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "char m_messageText"
    #pragma pack(push, 1)
    class CPointClientUIWorldTextPanel : public server::CPointClientUIWorldPanel
    {
    public:
        // metadata: MNetworkEnable
        char m_messageText[512]; // 0x990        
        
        // Datamap fields:
        // void InputToggle; // 0x0
        // CUtlSymbolLarge InputSetMessage; // 0x0
        // int32_t InputSetIntMessage; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointClientUIWorldTextPanel because it is not a standard-layout class
    static_assert(sizeof(CPointClientUIWorldTextPanel) == 0xb90);
};
