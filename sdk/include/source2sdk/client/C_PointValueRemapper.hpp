#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/ValueRemapperHapticsType_t.hpp"
#include "source2sdk/client/ValueRemapperInputType_t.hpp"
#include "source2sdk/client/ValueRemapperMomentumType_t.hpp"
#include "source2sdk/client/ValueRemapperOutputType_t.hpp"
#include "source2sdk/client/ValueRemapperRatchetType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x658
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
        // static metadata: MNetworkVarNames "CHandle< C_BaseEntity > m_hOutputEntities"
        // static metadata: MNetworkVarNames "ValueRemapperHapticsType_t m_nHapticsType"
        // static metadata: MNetworkVarNames "ValueRemapperMomentumType_t m_nMomentumType"
        // static metadata: MNetworkVarNames "float m_flMomentumModifier"
        // static metadata: MNetworkVarNames "float m_flSnapValue"
        // static metadata: MNetworkVarNames "ValueRemapperRatchetType_t m_nRatchetType"
        // static metadata: MNetworkVarNames "float m_flInputOffset"
        #pragma pack(push, 1)
        class C_PointValueRemapper : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bDisabled; // 0x5e0            
            bool m_bDisabledOld; // 0x5e1            
            // metadata: MNetworkEnable
            bool m_bUpdateOnClient; // 0x5e2            
            uint8_t _pad05e3[0x1]; // 0x5e3
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperInputType_t m_nInputType; // 0x5e4            
            // metadata: MNetworkEnable
            // m_hRemapLineStart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRemapLineStart;
            char m_hRemapLineStart[0x4]; // 0x5e8            
            // metadata: MNetworkEnable
            // m_hRemapLineEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRemapLineEnd;
            char m_hRemapLineEnd[0x4]; // 0x5ec            
            // metadata: MNetworkEnable
            float m_flMaximumChangePerSecond; // 0x5f0            
            // metadata: MNetworkEnable
            float m_flDisengageDistance; // 0x5f4            
            // metadata: MNetworkEnable
            float m_flEngageDistance; // 0x5f8            
            // metadata: MNetworkEnable
            bool m_bRequiresUseKey; // 0x5fc            
            uint8_t _pad05fd[0x3]; // 0x5fd
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperOutputType_t m_nOutputType; // 0x600            
            uint8_t _pad0604[0x4]; // 0x604
            // metadata: MNetworkEnable
            // m_hOutputEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_hOutputEntities;
            char m_hOutputEntities[0x18]; // 0x608            
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperHapticsType_t m_nHapticsType; // 0x620            
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperMomentumType_t m_nMomentumType; // 0x624            
            // metadata: MNetworkEnable
            float m_flMomentumModifier; // 0x628            
            // metadata: MNetworkEnable
            float m_flSnapValue; // 0x62c            
            float m_flCurrentMomentum; // 0x630            
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperRatchetType_t m_nRatchetType; // 0x634            
            float m_flRatchetOffset; // 0x638            
            // metadata: MNetworkEnable
            float m_flInputOffset; // 0x63c            
            bool m_bEngaged; // 0x640            
            bool m_bFirstUpdate; // 0x641            
            uint8_t _pad0642[0x2]; // 0x642
            float m_flPreviousValue; // 0x644            
            source2sdk::entity2::GameTime_t m_flPreviousUpdateTickTime; // 0x648            
            Vector m_vecPreviousTestPoint; // 0x64c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointValueRemapper because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointValueRemapper) == 0x658);
    };
};
