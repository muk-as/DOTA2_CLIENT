#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/soundlevel_t.hpp"
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/dynpitchvol_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        #pragma pack(push, 1)
        class CAmbientGeneric : public source2sdk::server::CPointEntity
        {
        public:
            float m_radius; // 0x_            
            float m_flMaxRadius; // 0x_            
            source2sdk::client::soundlevel_t m_iSoundLevel; // 0x_            
            source2sdk::server::dynpitchvol_t m_dpv; // 0x_            
            bool m_fActive; // 0x_            
            bool m_fLooping; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszSound; // 0x_            
            CUtlSymbolLarge m_sSourceEntName; // 0x_            
            // metadata: MNotSaved
            // m_hSoundSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSoundSource;
            char m_hSoundSource[0x_]; // 0x_            
            // metadata: MNotSaved
            CEntityIndex m_nSoundSourceEntIndex; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_nGUID; // 0x_
            // void CAmbientGenericRampThink; // 0x_
            // void InputPlaySound; // 0x_
            // void InputStopSound; // 0x_
            // void InputToggleSound; // 0x_
            // float InputPitch; // 0x_
            // float InputVolume; // 0x_
            // float InputFadeIn; // 0x_
            // float InputFadeOut; // 0x_
            // int32_t fadein; // 0x_
            // int32_t fadeout; // 0x_
            // int32_t fadeinsecs; // 0x_
            // int32_t fadeoutsecs; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAmbientGeneric because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAmbientGeneric) == 0x_);
    };
};
