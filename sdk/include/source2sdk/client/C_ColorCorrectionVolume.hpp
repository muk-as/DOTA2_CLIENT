#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
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
    // Size: 0xa08
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "float m_MaxWeight"
    // static metadata: MNetworkVarNames "float m_FadeDuration"
    // static metadata: MNetworkVarNames "float m_Weight"
    // static metadata: MNetworkVarNames "char m_lookupFilename"
    #pragma pack(push, 1)
    class C_ColorCorrectionVolume : public client::C_BaseTrigger
    {
    public:
        float m_LastEnterWeight; // 0x7e0        
        float m_LastEnterTime; // 0x7e4        
        float m_LastExitWeight; // 0x7e8        
        float m_LastExitTime; // 0x7ec        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x7f0        
        [[maybe_unused]] std::uint8_t pad_0x7f1[0x3]; // 0x7f1
        // metadata: MNetworkEnable
        float m_MaxWeight; // 0x7f4        
        // metadata: MNetworkEnable
        float m_FadeDuration; // 0x7f8        
        // metadata: MNetworkEnable
        float m_Weight; // 0x7fc        
        // metadata: MNetworkEnable
        char m_lookupFilename[512]; // 0x800        
        [[maybe_unused]] std::uint8_t pad_0xa00[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ColorCorrectionVolume because it is not a standard-layout class
    static_assert(sizeof(C_ColorCorrectionVolume) == 0xa08);
};
