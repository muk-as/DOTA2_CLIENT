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
        // 
        // static metadata: MNetworkVarNames "string_t m_iszStackName"
        // static metadata: MNetworkVarNames "string_t m_iszOperatorName"
        // static metadata: MNetworkVarNames "string_t m_iszOpvarName"
        // static metadata: MNetworkVarNames "int m_iOpvarIndex"
        // static metadata: MNetworkVarNames "bool m_bUseAutoCompare"
        // static metadata: MNetworkVarNames "bool m_bFastRefresh"
        #pragma pack(push, 1)
        class CSoundOpvarSetPointBase : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bDisabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CEntityHandle m_hSource; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszSourceEntityName; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            Vector m_vLastPosition; // 0x_            
            float m_flRefreshTime; // 0x_            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszStackName; // 0x_            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszOperatorName; // 0x_            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszOpvarName; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iOpvarIndex; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUseAutoCompare; // 0x_            
            // metadata: MNetworkEnable
            bool m_bFastRefresh; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // uint64_t InputSetEventGuid; // 0x_
            // CUtlSymbolLarge InputSetStackName; // 0x_
            // CUtlSymbolLarge InputSetOperatorName; // 0x_
            // CUtlSymbolLarge InputSetOpvarName; // 0x_
            // CUtlSymbolLarge InputSetOpvarIndex; // 0x_
            // CUtlSymbolLarge InputSetSourceEntity; // 0x_
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
            // void CSoundOpvarSetPointBaseSetOpvarThink; // 0x_
            // void m_nGUID; // 0x_
            // void m_hOpvarData; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetPointBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetPointBase) == 0x_);
    };
};
