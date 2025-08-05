#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0xd00
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "float m_MaxWeight"
        // static metadata: MNetworkVarNames "float m_FadeDuration"
        // static metadata: MNetworkVarNames "float m_Weight"
        // static metadata: MNetworkVarNames "char m_lookupFilename"
        #pragma pack(push, 1)
        class C_ColorCorrectionVolume : public source2sdk::client::C_BaseTrigger
        {
        public:
            float m_LastEnterWeight; // 0xad8            
            source2sdk::entity2::GameTime_t m_LastEnterTime; // 0xadc            
            float m_LastExitWeight; // 0xae0            
            source2sdk::entity2::GameTime_t m_LastExitTime; // 0xae4            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0xae8            
            uint8_t _pad0ae9[0x3]; // 0xae9
            // metadata: MNetworkEnable
            float m_MaxWeight; // 0xaec            
            // metadata: MNetworkEnable
            float m_FadeDuration; // 0xaf0            
            // metadata: MNetworkEnable
            float m_Weight; // 0xaf4            
            // metadata: MNetworkEnable
            char m_lookupFilename[512]; // 0xaf8            
            uint8_t _pad0cf8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ColorCorrectionVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ColorCorrectionVolume) == 0xd00);
    };
};
