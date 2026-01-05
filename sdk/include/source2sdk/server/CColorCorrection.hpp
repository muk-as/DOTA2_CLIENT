#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // MNetworkNoBase
        // 
        // static metadata: MNetworkIncludeByUserGroup "Origin"
        // static metadata: MNetworkVarNames "float32 m_flFadeInDuration"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutDuration"
        // static metadata: MNetworkVarNames "float32 m_flMaxWeight"
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "bool m_bMaster"
        // static metadata: MNetworkVarNames "bool m_bClientSide"
        // static metadata: MNetworkVarNames "bool m_bExclusive"
        // static metadata: MNetworkVarNames "float32 m_MinFalloff"
        // static metadata: MNetworkVarNames "float32 m_MaxFalloff"
        // static metadata: MNetworkVarNames "float32 m_flCurWeight"
        // static metadata: MNetworkVarNames "char m_netlookupFilename"
        #pragma pack(push, 1)
        class CColorCorrection : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flFadeInDuration; // 0x_            
            // metadata: MNetworkEnable
            float m_flFadeOutDuration; // 0x_            
            float m_flStartFadeInWeight; // 0x_            
            float m_flStartFadeOutWeight; // 0x_            
            source2sdk::entity2::GameTime_t m_flTimeStartFadeIn; // 0x_            
            source2sdk::entity2::GameTime_t m_flTimeStartFadeOut; // 0x_            
            // metadata: MNetworkEnable
            float m_flMaxWeight; // 0x_            
            bool m_bStartDisabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bMaster; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bClientSide; // 0x_            
            // metadata: MNetworkEnable
            bool m_bExclusive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_MinFalloff; // 0x_            
            // metadata: MNetworkEnable
            float m_MaxFalloff; // 0x_            
            // metadata: MNetworkEnable
            float m_flCurWeight; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            char m_netlookupFilename[512]; // 0x_            
            CUtlSymbolLarge m_lookupFilename; // 0x_            
            
            // Datamap fields:
            // void CColorCorrectionFadeInThink; // 0x_
            // void CColorCorrectionFadeOutThink; // 0x_
            // void m_netlookupFilename; // 0x_
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
            // float InputSetFadeInDuration; // 0x_
            // float InputSetFadeOutDuration; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CColorCorrection because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CColorCorrection) == 0x_);
    };
};
