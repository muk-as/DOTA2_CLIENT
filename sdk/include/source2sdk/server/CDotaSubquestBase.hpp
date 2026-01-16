#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
        class CDotaSubquestBase : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            char m_pszSubquestText[256]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bHidden; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCompleted; // 0x_            
            // metadata: MNetworkEnable
            bool m_bShowProgressBar; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nProgressBarHueShift; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_pnTextReplaceValuesCDotaSubquestBase[2]; // 0x_            
            // metadata: MNetworkEnable
            char m_pszTextReplaceString[64]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nTextReplaceValueVersion; // 0x_            
            char m_pszSubquestName[256]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDotaSubquestBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDotaSubquestBase) == 0x_);
    };
};
