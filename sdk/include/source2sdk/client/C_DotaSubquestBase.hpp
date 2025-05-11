#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Size: 0x668
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "char m_pszSubquestText"
        // static metadata: MNetworkVarNames "bool m_bHidden"
        // static metadata: MNetworkVarNames "bool m_bCompleted"
        // static metadata: MNetworkVarNames "bool m_bShowProgressBar"
        // static metadata: MNetworkVarNames "int m_nProgressBarHueShift"
        // static metadata: MNetworkVarNames "int m_pnTextReplaceValuesCDotaSubquestBase"
        // static metadata: MNetworkVarNames "char m_pszTextReplaceString"
        // static metadata: MNetworkVarNames "int m_nTextReplaceValueVersion"
        #pragma pack(push, 1)
        class C_DotaSubquestBase : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            char m_pszSubquestText[256]; // 0x510            
            // metadata: MNetworkEnable
            bool m_bHidden; // 0x610            
            // metadata: MNetworkEnable
            bool m_bCompleted; // 0x611            
            // metadata: MNetworkEnable
            bool m_bShowProgressBar; // 0x612            
            uint8_t _pad0613[0x1]; // 0x613
            // metadata: MNetworkEnable
            std::int32_t m_nProgressBarHueShift; // 0x614            
            // metadata: MNetworkEnable
            std::int32_t m_pnTextReplaceValuesCDotaSubquestBase[2]; // 0x618            
            // metadata: MNetworkEnable
            char m_pszTextReplaceString[64]; // 0x620            
            // metadata: MNetworkEnable
            std::int32_t m_nTextReplaceValueVersion; // 0x660            
            bool m_bWasCompleted; // 0x664            
            uint8_t _pad0665[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DotaSubquestBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DotaSubquestBase) == 0x668);
    };
};
