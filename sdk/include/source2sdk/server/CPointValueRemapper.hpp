#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ValueRemapperHapticsType_t.hpp"
#include "source2sdk/client/ValueRemapperInputType_t.hpp"
#include "source2sdk/client/ValueRemapperMomentumType_t.hpp"
#include "source2sdk/client/ValueRemapperOutputType_t.hpp"
#include "source2sdk/client/ValueRemapperRatchetType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerPawn;
    };
};

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
        // static metadata: MNetworkVarNames "bool m_bDisabled"
        // static metadata: MNetworkVarNames "bool m_bUpdateOnClient"
        // static metadata: MNetworkVarNames "ValueRemapperInputType_t m_nInputType"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineStart"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineEnd"
        // static metadata: MNetworkVarNames "float m_flMaximumChangePerSecond"
        // static metadata: MNetworkVarNames "float m_flDisengageDistance"
        // static metadata: MNetworkVarNames "float m_flEngageDistance"
        // static metadata: MNetworkVarNames "bool m_bRequiresUseKey"
        // static metadata: MNetworkVarNames "ValueRemapperOutputType_t m_nOutputType"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity > m_hOutputEntities"
        // static metadata: MNetworkVarNames "ValueRemapperHapticsType_t m_nHapticsType"
        // static metadata: MNetworkVarNames "ValueRemapperMomentumType_t m_nMomentumType"
        // static metadata: MNetworkVarNames "float m_flMomentumModifier"
        // static metadata: MNetworkVarNames "float m_flSnapValue"
        // static metadata: MNetworkVarNames "ValueRemapperRatchetType_t m_nRatchetType"
        // static metadata: MNetworkVarNames "float m_flInputOffset"
        #pragma pack(push, 1)
        class CPointValueRemapper : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bDisabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUpdateOnClient; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperInputType_t m_nInputType; // 0x_            
            CUtlSymbolLarge m_iszRemapLineStartName; // 0x_            
            CUtlSymbolLarge m_iszRemapLineEndName; // 0x_            
            // metadata: MNetworkEnable
            // m_hRemapLineStart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRemapLineStart;
            char m_hRemapLineStart[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hRemapLineEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRemapLineEnd;
            char m_hRemapLineEnd[0x_]; // 0x_            
            // metadata: MNetworkEnable
            float m_flMaximumChangePerSecond; // 0x_            
            // metadata: MNetworkEnable
            float m_flDisengageDistance; // 0x_            
            // metadata: MNetworkEnable
            float m_flEngageDistance; // 0x_            
            // metadata: MNetworkEnable
            bool m_bRequiresUseKey; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperOutputType_t m_nOutputType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszOutputEntityName; // 0x_            
            CUtlSymbolLarge m_iszOutputEntity2Name; // 0x_            
            CUtlSymbolLarge m_iszOutputEntity3Name; // 0x_            
            CUtlSymbolLarge m_iszOutputEntity4Name; // 0x_            
            // metadata: MNetworkEnable
            // m_hOutputEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_hOutputEntities;
            char m_hOutputEntities[0x_]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperHapticsType_t m_nHapticsType; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperMomentumType_t m_nMomentumType; // 0x_            
            // metadata: MNetworkEnable
            float m_flMomentumModifier; // 0x_            
            // metadata: MNetworkEnable
            float m_flSnapValue; // 0x_            
            float m_flCurrentMomentum; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperRatchetType_t m_nRatchetType; // 0x_            
            float m_flRatchetOffset; // 0x_            
            // metadata: MNetworkEnable
            float m_flInputOffset; // 0x_            
            bool m_bEngaged; // 0x_            
            bool m_bFirstUpdate; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flPreviousValue; // 0x_            
            source2sdk::entity2::GameTime_t m_flPreviousUpdateTickTime; // 0x_            
            Vector m_vecPreviousTestPoint; // 0x_            
            // m_hUsingPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hUsingPlayer;
            char m_hUsingPlayer[0x_]; // 0x_            
            float m_flCustomOutputValue; // 0x_            
            CUtlSymbolLarge m_iszSoundEngage; // 0x_            
            CUtlSymbolLarge m_iszSoundDisengage; // 0x_            
            CUtlSymbolLarge m_iszSoundReachedValueZero; // 0x_            
            CUtlSymbolLarge m_iszSoundReachedValueOne; // 0x_            
            CUtlSymbolLarge m_iszSoundMovingLoop; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_Position has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_Position;
            char m_Position[0x_]; // 0x_            
            // m_PositionDelta has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_PositionDelta;
            char m_PositionDelta[0x_]; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnReachedValueZero; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnReachedValueOne; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnReachedValueCustom; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnEngage; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnDisengage; // 0x_            
            
            // Datamap fields:
            // void CPointValueRemapperUpdateThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointValueRemapper because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointValueRemapper) == 0x_);
    };
};
